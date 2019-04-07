/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab_Conexion;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_puertos;
    QPushButton *button_refresh_ports;
    QLabel *label_5;
    QLineEdit *edit_estado;
    QPushButton *button_connect;
    QWidget *tab_ServerCom;
    QPlainTextEdit *txtReceive;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSend;
    QPlainTextEdit *txtSend;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txtIP;
    QLineEdit *txtPort;
    QPushButton *btnConnect;
    QPushButton *btnListen;
    QWidget *tab_Interfaz;
    QGraphicsView *graphicsView_4;
    QFrame *frame;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_6;
    QGraphicsView *graphicsView_5;
    QComboBox *comboBox;
    QGraphicsView *graphicsView_3;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(904, 579);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/Save As.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/paste.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Images/Deshacer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Images/Rehacer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(-200, 200, 75, 23));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 881, 491));
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab_Conexion = new QWidget();
        tab_Conexion->setObjectName(QString::fromUtf8("tab_Conexion"));
        groupBox = new QGroupBox(tab_Conexion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 331, 131));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(300, 0));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_puertos = new QComboBox(groupBox);
        comboBox_puertos->setObjectName(QString::fromUtf8("comboBox_puertos"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_puertos->sizePolicy().hasHeightForWidth());
        comboBox_puertos->setSizePolicy(sizePolicy1);
        comboBox_puertos->setEditable(false);

        horizontalLayout->addWidget(comboBox_puertos);

        button_refresh_ports = new QPushButton(groupBox);
        button_refresh_ports->setObjectName(QString::fromUtf8("button_refresh_ports"));

        horizontalLayout->addWidget(button_refresh_ports);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        edit_estado = new QLineEdit(groupBox);
        edit_estado->setObjectName(QString::fromUtf8("edit_estado"));
        edit_estado->setAlignment(Qt::AlignCenter);
        edit_estado->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, edit_estado);

        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QString::fromUtf8("button_connect"));

        formLayout->setWidget(3, QFormLayout::FieldRole, button_connect);

        tabWidget->addTab(tab_Conexion, QString());
        tab_ServerCom = new QWidget();
        tab_ServerCom->setObjectName(QString::fromUtf8("tab_ServerCom"));
        txtReceive = new QPlainTextEdit(tab_ServerCom);
        txtReceive->setObjectName(QString::fromUtf8("txtReceive"));
        txtReceive->setGeometry(QRect(50, 62, 588, 191));
        txtReceive->setReadOnly(true);
        layoutWidget = new QWidget(tab_ServerCom);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 370, 591, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnClear = new QPushButton(layoutWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout_4->addWidget(btnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setEnabled(false);

        horizontalLayout_4->addWidget(btnSend);

        txtSend = new QPlainTextEdit(tab_ServerCom);
        txtSend->setObjectName(QString::fromUtf8("txtSend"));
        txtSend->setGeometry(QRect(50, 260, 588, 101));
        txtSend->setMaximumSize(QSize(16777215, 150));
        layoutWidget_2 = new QWidget(tab_ServerCom);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(55, 30, 581, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        txtIP = new QLineEdit(layoutWidget_2);
        txtIP->setObjectName(QString::fromUtf8("txtIP"));

        horizontalLayout_5->addWidget(txtIP);

        txtPort = new QLineEdit(layoutWidget_2);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        horizontalLayout_5->addWidget(txtPort);

        btnConnect = new QPushButton(layoutWidget_2);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        horizontalLayout_5->addWidget(btnConnect);

        btnListen = new QPushButton(layoutWidget_2);
        btnListen->setObjectName(QString::fromUtf8("btnListen"));

        horizontalLayout_5->addWidget(btnListen);

        tabWidget->addTab(tab_ServerCom, QString());
        tab_Interfaz = new QWidget();
        tab_Interfaz->setObjectName(QString::fromUtf8("tab_Interfaz"));
        graphicsView_4 = new QGraphicsView(tab_Interfaz);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(450, 130, 104, 104));
        graphicsView_4->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagenes/flechaderecha.png);"));
        frame = new QFrame(tab_Interfaz);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 120, 124, 124));
        frame->setMaximumSize(QSize(150, 150));
        QFont font;
        font.setPointSize(14);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(10);
        frame->setMidLineWidth(10);
        graphicsView = new QGraphicsView(tab_Interfaz);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(60, 130, 104, 104));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagenes/flecha.png);"));
        graphicsView_2 = new QGraphicsView(tab_Interfaz);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(320, 130, 104, 104));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagenes/flechaizquierda.png);"));
        graphicsView_6 = new QGraphicsView(tab_Interfaz);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(710, 130, 104, 104));
        graphicsView_6->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagenes/lapiz arriba.jpg);"));
        graphicsView_5 = new QGraphicsView(tab_Interfaz);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(580, 130, 104, 104));
        graphicsView_5->setStyleSheet(QString::fromUtf8("background-image: url(:/Imagenes/lapiz abajo.jpg);"));
        comboBox = new QComboBox(tab_Interfaz);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(220, 310, 51, 22));
        graphicsView_3 = new QGraphicsView(tab_Interfaz);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(190, 130, 104, 104));
        graphicsView_3->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/Imagenes/flechaabajo.png);"));
        label = new QLabel(tab_Interfaz);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 310, 131, 21));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label_2 = new QLabel(tab_Interfaz);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 310, 61, 21));
        label_2->setFont(font1);
        tabWidget->addTab(tab_Interfaz, QString());
        graphicsView_4->raise();
        graphicsView->raise();
        graphicsView_2->raise();
        graphicsView_6->raise();
        graphicsView_5->raise();
        comboBox->raise();
        graphicsView_3->raise();
        label->raise();
        label_2->raise();
        frame->raise();
        MainWindow->setCentralWidget(centralWidget);
        tabWidget->raise();
        pushButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 904, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Impresora 2D", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Conexi\303\263n", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Puerto Serie", nullptr));
#ifndef QT_NO_TOOLTIP
        button_refresh_ports->setToolTip(QApplication::translate("MainWindow", "Refrescar puertos", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_refresh_ports->setStatusTip(QApplication::translate("MainWindow", "Refrescar puertos", nullptr));
#endif // QT_NO_STATUSTIP
        button_refresh_ports->setText(QApplication::translate("MainWindow", "Actualizar", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Estado", nullptr));
        button_connect->setText(QApplication::translate("MainWindow", "Conectar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Conexion), QApplication::translate("MainWindow", "Estableciendo Conexion", nullptr));
        btnClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        btnSend->setText(QApplication::translate("MainWindow", "Send", nullptr));
        txtIP->setText(QApplication::translate("MainWindow", "127.0.0.1", nullptr));
        txtPort->setText(QApplication::translate("MainWindow", "3000", nullptr));
        btnConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        btnListen->setText(QApplication::translate("MainWindow", "Listen", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_ServerCom), QApplication::translate("MainWindow", "Comunicacion Server", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "0,5", "1000"));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "3", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "4", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "15", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow", "0,5", nullptr));
        label->setText(QApplication::translate("MainWindow", "Velocidad de recorrido", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Segundos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Interfaz), QApplication::translate("MainWindow", "Interfaz", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
