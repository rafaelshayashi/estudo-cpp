#include <iostream>
#include <string>
#include <fstream>
#include "include/rapidjson/document.h"
#include "include/json-reader/json-reader.hpp"

using namespace rapidjson;
using namespace std;

int main(){

    ifstream arquivoJson;
    char linha[255];
    string linhaString;

    arquivoJson.open("teste-json.json");

    if(arquivoJson.is_open()){
        getline(arquivoJson, linhaString);
    }

    arquivoJson.close();

    cout << "O arquivo contem: " << linhaString << endl;

    Document document;

    document.Parse(linhaString.c_str());

    //cout << "O arquivo contem: " << document.FindMember("Key2") << endl;

    Value::ConstMemberIterator itr = document.FindMember("Key1");
    if (itr != document.MemberEnd())
        printf("%s %s\n", itr->value.GetString());

    JsonRead jsonread;

    jsonread.setJsonString(linhaString);

    std::cout << jsonread.getValor("Key2") << std::endl;
    

}