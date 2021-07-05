#include "contador.h"

Contador::Contador(QObject *parent) : QObject(parent)
{
    this->m_valor = 0;
}

//**
//* @brief Contador::valor Obtiene el valor de la variable
//* @return  Valor entero
//*/

int Contador::valor(){ //getValor
    return m_valor;
}

/*//**
* @brief Contador::setValor Establece el valor de la variable
* @param valor Número entero para establecer a m_valor
*/


void Contador::setValor(int valor){
    if (valor != m_valor){
        m_valor = valor;
        emit valorCambiado(valor);    //Emitir el signal
    }
}


/*int Contador::getValor() const
{
    return m_valor;
}*/

