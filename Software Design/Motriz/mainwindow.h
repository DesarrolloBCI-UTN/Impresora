#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>

#include <QString>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>

#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QInputDialog>
#include <QComboBox>
#include <QMessageBox>
#include <QByteArray>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void EnumerarPuertos();
    void ActualizarEstadoConexion();
    void CerrarPuertos();
    void envio_linea_impresion();
    void Maquina_estado_impresora();

    void EvaluarAccion(QString data);
    void Temporizador();
    QTimer *timer;
public slots:
    void tiempo();

private slots:
    void on_btnConnect_clicked();
    void on_btnListen_clicked();
    void on_btnSend_clicked();
    void on_btnClear_clicked();
    void socket_aboutToClose();
    void socket_bytesWritten(qint64 bytes);
    void socket_connected();
    void socket_disconnected();
    void socket_error();
    void socket_readyRead();
    void socket_stateChanged();
    void server_newConnection();

    void on_push_imprimir_clicked();
    void on_button_refresh_ports_clicked();
    void on_comboBox_puertos_currentIndexChanged(int index);
    void on_button_connect_clicked();
    void on_pushButton_pedido_linea_clicked();


    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    bool connected;
    QTcpServer server;
    QTcpSocket *socket;

    uint Accion = 0; //variable del temporizador que determina la accion a realizar
    uint CBFreq = 500;

    int flag_conectado=0;
    int flag_impresion=0;
    int flag_pedido_linea=0;
    int flag_fin_archivo=0;
    QString Portname;
    QSerialPort *serial;
    QString mFilename;
    QString texto_codigo_g;
    QStringList lineas_codigo;

private:
    void log(QString msg);
    void socket_events();
    void update(bool connected);
    void resetframe(int index);
    void setframepos(int x, int y);
};

#endif // MAINWINDOW_H
