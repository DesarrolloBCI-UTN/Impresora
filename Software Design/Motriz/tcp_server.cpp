#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tcp_server.h"

/* TCP Server/Socket Functions.
 *
 */

void MainWindow::socket_events()
{
    connect(socket, SIGNAL(aboutToClose()), this, SLOT(socket_aboutToClose()));
    connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(socket_bytesWritten(qint64)));
    connect(socket, SIGNAL(connected()), this, SLOT(socket_connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(socket_disconnected()));
    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(socket_error()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(socket_readyRead()));
    connect(socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(socket_stateChanged()));
}

void MainWindow::on_btnConnect_clicked()
{
    if(!connected)
    {
        update(true);
        socket = new QTcpSocket(this);
        socket_events();
        socket->connectToHost(ui->txtIP->text(), ui->txtPort->text().toInt());
    }
    else
    {
        update(false);
        server.close();
        if(socket != nullptr)
        {
            socket->disconnectFromHost();
            socket->deleteLater();
            socket = nullptr;
        }
    }
}

void MainWindow::on_btnListen_clicked()
{
    update(true);
    server.listen(QHostAddress(ui->txtIP->text()), ui->txtPort->text().toInt());
}

void MainWindow::update(bool connected)
{
    this->connected = connected;
    if(connected)
    {
        ui->btnConnect->setText("Disconnect");
        ui->btnListen->setEnabled(false);
        ui->txtIP->setEnabled(false);
        ui->txtPort->setEnabled(false);
        ui->btnSend->setEnabled(true);
    }
    else
    {
        ui->btnConnect->setText("Connect");
        ui->btnListen->setEnabled(true);
        ui->txtIP->setEnabled(true);
        ui->txtPort->setEnabled(true);
        ui->btnSend->setEnabled(false);
    }
}

void MainWindow::on_btnSend_clicked()
{
    socket->write(ui->txtSend->toPlainText().replace('\r', "").replace('\n', "\r\n").toUtf8());
    ui->txtSend->clear();

}

void MainWindow::on_btnClear_clicked()
{
    ui->txtReceive->clear();
}

void MainWindow::socket_aboutToClose()
{
    log("socket_aboutToClose");
}

void MainWindow::socket_bytesWritten(qint64 bytes)
{
    log("socket_bytesWritten [" + QString::number(bytes) + "]");
}

void MainWindow::socket_connected()
{
    log("socket_connected");
}

void MainWindow::socket_disconnected()
{
    log("socket_disconnected");
    update(false);
}

void MainWindow::socket_error()
{
    log("socket_error [" + QString::number(socket->error()) + "] : " + socket->errorString());
}

/**
 *
 * @brief MainWindow::socket_readyRead
 */
void MainWindow::socket_readyRead()
{
    while(socket->bytesAvailable())
    {
        QString data = socket->readAll();
        log("socket_readyRead [" + QString::number(data.size()) + "] : \n" + data);
        EvaluarAccion(data);
    }
}
void MainWindow::socket_stateChanged()
{
    //log("socket_stateChanged");
}

void MainWindow::server_newConnection()
{
    log("server_newConnection");
    socket = server.nextPendingConnection();
    socket_events();
    server.close();
}

void MainWindow::log(QString msg)
{
    ui->txtReceive->appendPlainText(msg + "\n---");
}


void MainWindow::EvaluarAccion(QString data)
{
    /*
     * Los datos enviados por el casco son de la forma <Accion,IntensidadDeSeñal>
     * por lo que hago un split con \\W+
     * Donde    dataList[0]= Accion
     *          dataList[1]= IntensidadDeSeñal
     */
    QStringList dataList = data.split(QRegExp("\\W+"), QString::SkipEmptyParts);

    if(dataList[intensityIndex]>INTENSIDAD_BASE)
    {

        if(dataList[actionIndex]==ACCION1)
        {
            emit timer->stop();
            log("Congelar recuadro");
            log("Realizar Accion1!");

            lineas_codigo=SUBIR.split(QRegExp("\\W+"), QString::SkipEmptyParts);
            envio_linea_impresion();

        }
        else if(dataList[actionIndex]==ACCION2)
        {

            emit timer->stop();
            log("Congelar recuadro");
            log("Realizar Accion2!");
            //lineas_codigo[0]=BAJAR;

        }
    }else if(dataList[actionIndex]==NEUTRO)
    {
        emit timer->start(CBFreq);
        log("Descongelar recuadro");
        log("Mantener Accion previa");

        //lineas_codigo[0]=PARAR;



    }
}
