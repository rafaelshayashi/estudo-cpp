#include <iostream>


static const char arrayDeChar[] = "Array de Char";
static const char* ponteiroParaChar[] = {"Ponteiro para char"};

int recebePonteiro(const char *ponteiroParaChar[]){

    std::cout << "O array de char é na funcao é:" << &ponteiroParaChar << std::endl;

    std::cout << "O array de char é na funcao é:" << ponteiroParaChar[0] << std::endl;

}

int main(){


    std::cout << "O array de char é :" << arrayDeChar << std::endl;
    std::cout << "O array de char é :" << &ponteiroParaChar << std::endl;

    recebePonteiro(ponteiroParaChar);

    return 0;
}