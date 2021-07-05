#ifndef CONTADOR_H
#define CONTADOR_H

#include <QObject>

class Contador : public QObject
{
    Q_OBJECT
public:
    explicit Contador(QObject *parent = nullptr);
    int valor();  //getValor




public slots:
    void setValor(int valor);
    //int getValor() const;   //


signals:
    void valorCambiado(int nuevoValor);

private:
    int m_valor;



};

#endif // CONTADOR_H
