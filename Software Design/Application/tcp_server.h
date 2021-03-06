#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include <QString>

#define actionIndex     0
#define intensityIndex  1


/*
 * El casco indica 1 como neutro, por eso lo defino como 1
 */
#define NEUTRO QString::number(1)
#define ACCION QString::number(2)

#define INTENSIDAD_BASE 40  //Instensidad del comando valido.

/*
 * Comandos hacia el hardware
 */
#define PARAR       QString::number(107)
#define SUBIR       QString::number(101)
#define BAJAR       QString::number(102)
#define ADELANTE    QString::number(103)
#define ATRAS       QString::number(104)
#define IZQUIERDA   QString::number(105)
#define DERECHA     QString::number(106)




#endif // TCP_SERVER_H
