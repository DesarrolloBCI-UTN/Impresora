
#include "mainwindow.h"
#include "ui_mainwindow.h"


/////////////////////////////////////////
/*Funciones de inicializacion y recepcion*/
/////////////////////////////////////////
void MainWindow::serialReceived()
{

    QString ba;
    static QString todo_recibido;

    ba.resize(serial->bytesAvailable());//pido memoria por cada dato llegado
    ba=serial->readAll();

   if(ba =='>')
    {
       flag_pedido_linea=1;
    }


    Maquina_estado_impresora();

     todo_recibido.append(ba);

}


void MainWindow::inicializacion_serie(QString nombre_puerto)
{
    serial=new QSerialPort (this);

    serial->setPortName(nombre_puerto);
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);

}



void MainWindow::EnumerarPuertos()
{
    ui->comboBox_puertos->clear();

    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();

    for (int i = 0; i < ports.size(); i++)
    {
        ui->comboBox_puertos->addItem(ports.at(i).portName(), ports.at(i).portName());
    }
}






