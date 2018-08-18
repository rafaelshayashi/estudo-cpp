#include <iostream>
#include <string>

using namespace std;

int main(){

    int     numeroInteiro;
    double  numeroPontoFlutuante;
    char    umCaracter;
    bool    booleano;
    string  umaPalavra;

    numeroInteiro = 10;
    numeroPontoFlutuante = 10.2;
    umCaracter = 'a';
    booleano = true;
    umaPalavra = "Uma palavra";

    cout << "O numero inteiro é " << numeroInteiro << endl;
    cout << "O numero decimal é " << numeroPontoFlutuante << endl;
    cout << "O caracter é " << umCaracter << endl;
    cout << "O booleano é " << booleano << endl;
    cout << "A palavra é " << umaPalavra << endl;

    // Retorna 0 para o informar ao OS que deu tudo certo
    return 0;
}