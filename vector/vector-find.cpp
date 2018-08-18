#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector <std::string> stringVetores;

    stringVetores.push_back("Uma string");
    stringVetores.push_back("Segunda string");

    std::cout << "A primeira string é: " << stringVetores[0] << std::endl;

    if(std::find(stringVetores.begin(), stringVetores.end(), "Uma string")!= stringVetores.end()){
        std::cout <<  "Encontrou" << std::endl;
    }

    


}