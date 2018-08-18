#include "conta-corrente.hpp"

/*
 * Constutor
 */
Conta::Conta()
{
}

/*
 * Destrutor
 */
Conta::~Conta()
{
}

void Conta::setNumero(int numero){
    this->numero = numero;
}

int Conta::getNumero(){
    return this->numero;
}

Cliente Conta::getCliente(){
    return this->cliente;
}