#include <QCoreApplication>
#include <QDebug>
#include "contador.h"


int main(int argc, char *argv[])
{
    // Declarando dos objetos de la clase Contador
    Contador contadorA, contadorB;

    // ************* IMPORTANTE ************
    // Conectando el signal con el slot
    // contadorA.valorCambiado(int) ----> contadorB.setValor(int)
    QObject::connect(&contadorA, &Contador::valorCambiado,
                     &contadorB, &Contador::setValor);
    // *************************************

    qDebug() << "Contador A:"<< contadorA.valor();
    qDebug() << "Contador B:"<< contadorB.valor();

    // Estableciendo el valor en el objeto A
    contadorA.setValor(15);

    qDebug() << "Contador A:"<< contadorA.valor();
    // El valor en el objeto B ha cambiado (conectado)
    qDebug() << "Contador B:"<< contadorB.valor();


    return 0;
}
