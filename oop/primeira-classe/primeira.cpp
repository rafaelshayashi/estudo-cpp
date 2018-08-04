#include <iostream>
#include <string>

using namespace std;


class Banco {

    private:
        string nomeUsuario;
        int numeroConta;
        int numeroAgencia;
        double saldo;

    public:
        Banco(string nome, double saldoRecebido){
            nomeUsuario = nome;
            saldo = saldoRecebido;
        }

        string getNome(){
            return nomeUsuario;
        }

        double getSaldo(){
            return saldo;
        }
};


int main(){

    Banco c1("Rafael Simionato Hayashi", 20.10);

    cout << "O nome do cliente é " << c1.getNome() << endl;
    cout << "O saldo em conta é de R$ " << c1.getSaldo() << endl;
    
    return 0;
}
