#ifndef PAIS_H
#define PAIS_H
#include <QString>
#include <QStringList>


class pais
{
private:
    QString Name;
    QString Capital;
    int Superficie;

public:
    pais(QString Name,QString Capital,int Superficie);
    QString getName();
    QString getCapital();
    int getSuperficie();
};

#endif // PAIS_H
