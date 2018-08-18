#include <iostream>
#include "include/conta-corrente.hpp"


int main(){


    Conta conta;

    conta.setNumero(1010);

    std::cout <<  "O numero da conta corrente é: " << conta.getNumero() << std::endl;

    conta.getCliente().setNome("Rafael Simionato Hayashi");
    conta.getCliente().setIdentificacao(10);

    std::cout << conta.getCliente().getNome() << std::endl;
    std::cout << conta.getCliente().getIdentificacao() << std::endl;
}