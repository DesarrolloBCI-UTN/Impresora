#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connected = false;
    socket = nullptr;
    connect(&server, SIGNAL(newConnection()), this, SLOT(server_newConnection()));
    ui->btnConnect->setFocus();

    EnumerarPuertos();
    ActualizarEstadoConexion();
    qDebug()<<"Espero coneccion puerto serie";
}

MainWindow::~MainWindow()
{
    delete ui;
    CerrarPuertos();
}
void MainWindow::CerrarPuertos()
{
   serial->close();
   delete serial;
   serial = NULL;
}



/* Logica referida a la inicializacion del puerto
 *
 */
void MainWindow::on_button_refresh_ports_clicked()
{
     EnumerarPuertos();
     ActualizarEstadoConexion();
}

void MainWindow::on_comboBox_puertos_currentIndexChanged(int index)
{
    Portname = ui->comboBox_puertos->itemData(index).toString();    //recupero la data del item de indice index
    return;
}

void MainWindow::on_button_connect_clicked()
{

    if (flag_conectado==0)
    {
        serial = new QSerialPort(this);

        serial->setPortName(Portname);
        serial->setBaudRate(QSerialPort::Baud9600);
        //serial->setFlowControl(QSerialPort::NoFlowControl);
        serial->setParity(QSerialPort::NoParity);
        serial->setDataBits(QSerialPort::Data8);
        serial->setStopBits(QSerialPort::OneStop);

           if(!serial->open(QIODevice::ReadWrite))
           {
            QMessageBox::critical(this,"Error","No se puede abrir el puerto "+serial->portName());
            delete serial;
            serial = NULL;
           }
           else
           {
            ui->button_connect->setText("Desconectar");
            flag_conectado=1;
           }
    }
    else
    {
        delete serial ;
        serial = NULL;
        ui->button_connect->setText("Conectar");
        flag_conectado=0;

    }

   ActualizarEstadoConexion();
   return;
}

void MainWindow::ActualizarEstadoConexion()
{
    if (flag_conectado==1)
    {
        //ui->mainToolBar->show();
        ui->menuBar->show();

        ui->edit_estado->setStyleSheet("font-weight: bold; color: black; background-color: lightgreen;");
        ui->edit_estado->setText("CONECTADO");
        ui->button_connect->setText("Desconectar");
        connect(serial,SIGNAL(readyRead()),this,SLOT(serialReceived())); //una vez que esta conectado configuro la interupcion por una rx serie

       // ui->tabWidget->setTabEnabled(1,TRUE);
       // ui->tab_Codigo->show();

    }
    else
    {
        //ui->mainToolBar->hide();
        ui->menuBar->hide();
       // ui->tabWidget->setTabEnabled(1,FALSE);

        ui->edit_estado->setStyleSheet("font-weight: normal; color: white; background-color: red;");
        ui->edit_estado->setText("Desconectado");
        ui->button_connect->setText("Conectar");
    }
  return;
}

/* Logica referida a la impresion
 *
 */
void MainWindow::on_push_imprimir_clicked()
{

     qDebug()<<"Verifico que cargo el documento";
     if (texto_codigo_g ==NULL)
     {
        QMessageBox::information(this,"Error","Cargar el archivo de codigo G");
     }

     if(texto_codigo_g != NULL)
     {
      lineas_codigo = texto_codigo_g.split('\n'); //divide todo el archivo de cogido g en lineas
      //lineas_codigo.prepend("ACA INICIA LA TRAMA");
      //lineas_codigo << "FINALIZA LA TRAMA";

      flag_pedido_linea=1;
      flag_impresion=1;
      flag_fin_archivo=0;

      envio_linea_impresion(); //ENVIO LA PRIMER LINEA DE IMPRESION
     }

}


void MainWindow::envio_linea_impresion()
{
    static QString Texto2;
    static int i=0;

    qDebug("%d",i);
    serial->write("#");
    Texto2=lineas_codigo.at(i);
    serial->write(Texto2.toLocal8Bit()); //convierto a qBYtearray y envio el QBYTE
    serial->write("$\n");


     if (i==(lineas_codigo.size())-1)
     {
        flag_fin_archivo=1;
        i=0;
        serial->write("?");
        return;
     }
     i++;
}



void MainWindow::on_pushButton_pedido_linea_clicked()
{
    flag_pedido_linea=1;
    qDebug()<<"Pido Linea";

    serial->write(">");//fuerzo la pedida de linea
    // envio_linea_impresion();
}

void MainWindow::Maquina_estado_impresora()
{
    if(flag_impresion==1 && flag_pedido_linea==1&& flag_fin_archivo==0)
    {
        qDebug()<<"imprimo";
        envio_linea_impresion();
        flag_pedido_linea=0;
        return;
    }

    if(flag_fin_archivo==1)
    {
        qDebug()<<"Finalizo la impresion";
        flag_impresion=0;
        flag_pedido_linea=0;
        return;
    }
    qDebug()<<"esperando...";
}
