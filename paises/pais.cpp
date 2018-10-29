#include "pais.h"
#include <QString>

pais::pais(QString Name, QString Capital, int Superficie)
{
 this->Name = Name;
 this->Capital = Capital;
 this->Superficie = Superficie;
}

QString pais::getName(){
    return this->Name;
}

QString pais::getCapital(){
    return this->Capital;
}

int pais::getSuperficie(){
    return this->Superficie;
}
