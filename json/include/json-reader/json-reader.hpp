#include <string>
#include "../rapidjson/document.h"

#ifndef JSON_READER_H
#define JSON_READER_H

class JsonRead 
{
    private:
        rapidjson::Document document;
    public:

        JsonRead();
        ~JsonRead();

        void setJsonString(std::string &strJson);
        std::string getValor(std::string chave);

        bool verificaChave(std::string chave);

};
#endif