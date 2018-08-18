#include "cliente.hpp"
#include <string>

#ifndef CONTA_CORRENT_H
#define CONTA_CORRENT_H

class Conta
{
private:
    int     numero;
    int     agencia;
    double  saldo;
    Cliente cliente;
    
public:
    Conta();
    ~Conta();

    void setNumero(int numero);
    int getNumero();
    Cliente getCliente();
};

#endif

