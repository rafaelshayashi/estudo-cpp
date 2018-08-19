#include "json-reader.hpp"

JsonRead::JsonRead()
{
}

JsonRead::~JsonRead()
{
}

void JsonRead::setJsonString(std::string &strJson)
{

    this->document.Parse(strJson.c_str());

}

std::string JsonRead::getValor(std::string chave){
    
    if (this->verificaChave(chave))
        return this->document[chave.c_str()].GetString();

    return "ERRO";

}

bool JsonRead::verificaChave(std::string chave){

    rapidjson::Value::ConstMemberIterator itr = this->document.FindMember(chave.c_str());
    
    if (itr != this->document.MemberEnd())
        return 1;

    return 0;
}
