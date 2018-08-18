#include <string>

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente
{
private:
    std::string nome;
    std::string cpf;
    int         indentificacao;

public:
    Cliente();
    ~Cliente();

    void setIdentificacao(int identificacao);
    int getIdentificacao();
    void setNome(std::string nome);
    std::string getNome();
};
#endif