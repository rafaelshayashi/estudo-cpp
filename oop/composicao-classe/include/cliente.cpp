#include "cliente.hpp"
#include <string>

Cliente::Cliente()
{
}

Cliente::~Cliente()
{
}

void Cliente::setNome(std::string nome){
    this->nome = nome;
}

std::string Cliente::getNome(){
    return this->nome;
}

void Cliente::setIdentificacao(int noindentificacaome){
    this->indentificacao = indentificacao;
}

int Cliente::getIdentificacao(){
    return this->indentificacao;
}