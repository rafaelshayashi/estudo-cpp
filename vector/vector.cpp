#include <iostream>
#include <vector>

/*
 * Recebe um inteiro e uma referencia para um
 * vetor e insere esse inteiro no vetor
 */
void adicionaUmInteiro(int n, std::vector<int> &vetor){

    vetor.push_back(n);

}

int main(){
    // Construtores
    std::vector<int>         vetorInt;           // Vetores de int vazios
    std::vector<std::string> vetorString;    // Vetor vazio de string

    // Inserindo um inteiro
    vetorInt.push_back (10);

    vetorString.push_back("Um vetor string");

    std::cout << " O vetor vetorInt possui na sua primeira posição o valor :";
    std::cout << vetorInt[0] << std::endl;

    std::cout << " O vetor vetorString possui na sua primeira posição o valor :";
    std::cout << vetorString[0] << std::endl;

    std::cout << " Adicionando um inteiro em um vetor " << std::endl;
    adicionaUmInteiro(30, vetorInt);

    std::cout << &vetorInt << std::endl;

    std::cout << " O inteiro adicionado foi :";
    std::cout << vetorInt[1] << std::endl;



}

