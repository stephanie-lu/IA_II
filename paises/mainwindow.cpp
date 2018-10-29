#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Latin American Countries");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    pais *Peru = new pais("Perú","Lima",1285216);
    pais *Brasil = new pais("Brasil","Sao Paulo",8515767);
    pais *Bolivia = new pais("Bolivia","La paz",1098521);
    pais *Chile = new pais ("Chile","Santiago",756096);
    pais *Ecuador = new pais("Ecuador","Quito",256370);
    pais *Colombia = new pais("Colombia","Bogota",1141748);
    pais *Venezuela = new pais("Venezuela","Caracas",916445);
    pais *Argentina = new pais("Argentina","Buenos Aires",2780400);
    pais *Uruguay = new pais("Uruguay","Montevideo",176215);
    pais *Paraguay = new pais("Paraguay","Asunción",406752);
    pais *Guyana = new pais("Guyana","Georgetown",214970);
    pais *Suriname = new pais("Suriname","Paramaribo",163821);
    pais *Guyana_francesa = new pais("Guyana Francesa","Cayena",83534);

    QStringList limitrofes_peru = {"Ecuador", "Colombia","Brasil","Bolivia","Chile"};
    QStringList limitrofes_brasil = {"Argentina", "Paraguay","Uruguay","Colombia","Perú","Bolivia","Venezuela","Guyana","Suriname","Guyana Francesa"};
    QStringList limitrofes_bolivia = {"Chile", "Argentina","Paraguay","Brasil","Perú"};
    QStringList limitrofes_chile = {"Perú", "Bolivia","Argentina"};
    QStringList limitrofes_ecuador = {"Colombia", "Perú"};
    QStringList limitrofes_colombia = {"Ecuador", "Peru","Brasil","Venezuela"};
    QStringList limitrofes_venezuela = {"Guyana", "Colombia","Brasil"};
    QStringList limitrofes_argentina = {"Chile", "Uruguay","Brasil","Bolivia","Paraguay"};
    QStringList limitrofes_uruguay = {"Argentina", "Brasil"};
    QStringList limitrofes_paraguay = {"Bolivia", "Brasil","Argentina"};
    QStringList limitrofes_guyana = {"Venezuela", "Suriname","Brasil"};
    QStringList limitrofes_suriname = {"Guyana", "Guyana Francesa","Brasil"};
    QStringList limitrofes_guyanafran = {"Suriname","Brasil"};

    QStringList translimitrofes_peru = {"Argentina", "Paraguay","Uruguay","Venezuela","Guyana","Suriname","Guyana Francesa"};
    QStringList translimitrofes_brasil = {"Chile", "Ecuador"};
    QStringList translimitrofes_bolivia = {"Uruguay", "Colombia","Venezuela","Guyana","Suriname","Ecuador","Guyana Francesa"};
    QStringList translimitrofes_chile = {"Brasil", "Colombia","Ecuador","Paraguay","Uruguay"};
    QStringList translimitrofes_ecuador = {"Bolivia", "Chile","Brasil","Venezuela"};
    QStringList translimitrofes_colombia = {"Bolivia", "Chile","Guyana","Argentina","Uruguay","Paraguay","Guyana Francesa","Suriname"};
    QStringList translimitrofes_venezuela = {"Ecuador", "Peru","Argentina","Paraguay","Uruguay","Bolivia","Chile","Guyana Frnacesa","Suriname"};
    QStringList translimitrofes_argentina = {"Peru", "Colombia","Venezuela","Guyana","Suriname","Guyana Francesa"};
    QStringList translimitrofes_uruguay = {"Paraguay", "Colombia","Peru","Bolivia","Venezuela","Chile","Guyana","Suriname","Guyana Francesa"};
    QStringList translimitrofes_paraguay = {"Chile", "Uruguay","Colombia","Peru","Venezuela","Guyana","Suriname","Guyana Francesa"};
    QStringList translimitrofes_guyana = {"Guyana Francesa", "Argentina","Paraguay","Uruguay","Colombia","Peru","Bolivia"};
    QStringList translimitrofes_suriname = {"Argentina","Paraguay","Uruguay","Colombia","Peru","Bolivia","Venezuela"};
    QStringList translimitrofes_guyanafran = {"Guyana","Venezuela","Paraguay","Uruguay","Colombia","Peru","Bolivia","Argentina"};

    QStringList bandera_peru = {"Blanco","Rojo"};
    QStringList bandera_brasil = {"Verde","Azul","Amarillo"};
    QStringList bandera_bolivia = {"Rojo","Amarillo","Verde"};
    QStringList bandera_chile = {"Azul","Rojo","Blanco"};
    QStringList bandera_ecuador = {"Amarillo","Azul","Rojo"};
    QStringList bandera_colombia = {"Amarillo","Azul","Rojo"};
    QStringList bandera_venezuela = {"Amarillo","Azul","Rojo"};
    QStringList bandera_argentina = {"Celeste","Amarillo","Blanco"};
    QStringList bandera_uruguay = {"Azul","Blanco","Amarillo"};
    QStringList bandera_paraguay = {"Rojo","Azul","Blanco"};
    QStringList bandera_guyana = {"Rojo","Amarillo","Verde","Blanco","Negro"};
    QStringList bandera_suriname = {"Verde","Rojo","Amarillo","Blanco"};
    QStringList bandera_guyanafran = {"Verde","Amarillo"};

    ui->limitrofe->clear();
    ui->translimitrofe->clear();
    ui->bandera->clear();



    if(ui->rbperu->isChecked())
    {
        ui->titulo->setText(Peru->getName());
        ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(186, 218, 132); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
        ui->txtcapital->setText(Peru->getCapital());
        ui->txtsuperficie->setValue(Peru->getSuperficie());

        for (int i = 0; i < limitrofes_peru.size(); ++i) {
            ui->limitrofe->addItem(limitrofes_peru[i]);
        }

        for (int i = 0; i < translimitrofes_peru.size(); ++i) {
            ui->translimitrofe->addItem(translimitrofes_peru[i]);
        }

        for (int i = 0; i < bandera_peru.size(); ++i) {
            ui->bandera->addItem(bandera_peru[i]);
        }

        QPixmap pixmap(":/imagenes/Peru.png");
        ui->banderas->setPixmap(pixmap);
    }
    else{
        if(ui->rbbolivia->isChecked()){
        ui->titulo->setText(Bolivia->getName());
        ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(142, 175, 203); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
        ui->txtcapital->setText(Bolivia->getCapital());
        ui->txtsuperficie->setValue(Bolivia->getSuperficie());


        for (int i = 0; i < limitrofes_bolivia.size(); ++i) {
            ui->limitrofe->addItem(limitrofes_bolivia[i]);
        }

        for (int i = 0; i < translimitrofes_bolivia.size(); ++i) {
            ui->translimitrofe->addItem(translimitrofes_bolivia[i]);
        }

        for (int i = 0; i < bandera_bolivia.size(); ++i) {
            ui->bandera->addItem(bandera_bolivia[i]);
        }

        QPixmap pixmap(":/imagenes/Bolivia.png");
        ui->banderas->setPixmap(pixmap);

        }
        else{
            if(ui->rbbrasil->isChecked()){
            ui->titulo->setText(Brasil->getName());
            ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(248, 167, 129); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
            ui->txtcapital->setText(Brasil->getCapital());
            ui->txtsuperficie->setValue(Brasil->getSuperficie());


            for (int i = 0; i < limitrofes_brasil.size(); ++i) {
                ui->limitrofe->addItem(limitrofes_brasil[i]);
            }

            for (int i = 0; i < translimitrofes_brasil.size(); ++i) {
                ui->translimitrofe->addItem(translimitrofes_brasil[i]);
            }

            for (int i = 0; i < bandera_brasil.size(); ++i) {
                ui->bandera->addItem(bandera_brasil[i]);
            }

            QPixmap pixmap(":/imagenes/Brazil.png");
            ui->banderas->setPixmap(pixmap);

            }
            else{
                if(ui->rbarg->isChecked()){
                ui->titulo->setText(Argentina->getName());
                ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(186, 218, 132); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                ui->txtcapital->setText(Argentina->getCapital());
                ui->txtsuperficie->setValue(Argentina->getSuperficie());

                for (int i = 0; i < limitrofes_argentina.size(); ++i) {
                    ui->limitrofe->addItem(limitrofes_argentina[i]);
                }

                for (int i = 0; i < translimitrofes_argentina.size(); ++i) {
                    ui->translimitrofe->addItem(translimitrofes_argentina[i]);
                }

                for (int i = 0; i < bandera_argentina.size(); ++i) {
                    ui->bandera->addItem(bandera_argentina[i]);
                }

                QPixmap pixmap(":/imagenes/Argentina.png");
                ui->banderas->setPixmap(pixmap);

                }
                else{
                    if(ui->rbchile->isChecked()){
                    ui->titulo->setText(Chile->getName());
                    ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(248, 167, 129); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                    ui->txtcapital->setText(Chile->getCapital());
                    ui->txtsuperficie->setValue(Chile->getSuperficie());

                    for (int i = 0; i < limitrofes_chile.size(); ++i) {
                        ui->limitrofe->addItem(limitrofes_chile[i]);
                    }

                    for (int i = 0; i < translimitrofes_chile.size(); ++i) {
                        ui->translimitrofe->addItem(translimitrofes_chile[i]);
                    }

                    for (int i = 0; i < bandera_chile.size(); ++i) {
                        ui->bandera->addItem(bandera_chile[i]);
                    }

                    QPixmap pixmap(":/imagenes/Chile.png");
                    ui->banderas->setPixmap(pixmap);

                    }
                    else{
                        if(ui->rbvenezuela->isChecked()){
                        ui->titulo->setText(Venezuela->getName());
                        ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(186, 218, 132); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                        ui->txtcapital->setText(Venezuela->getCapital());
                        ui->txtsuperficie->setValue(Venezuela->getSuperficie());

                        for (int i = 0; i < limitrofes_venezuela.size(); ++i) {
                            ui->limitrofe->addItem(limitrofes_venezuela[i]);
                        }

                        for (int i = 0; i < translimitrofes_venezuela.size(); ++i) {
                            ui->translimitrofe->addItem(translimitrofes_venezuela[i]);
                        }

                        for (int i = 0; i < bandera_venezuela.size(); ++i) {
                            ui->bandera->addItem(bandera_venezuela[i]);
                        }

                        QPixmap pixmap(":/imagenes/Venezuela.png");
                        ui->banderas->setPixmap(pixmap);

                        }
                        else{
                            if(ui->rbecuador->isChecked()){
                            ui->titulo->setText(Ecuador->getName());
                            ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(248, 167, 129); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                            ui->txtcapital->setText(Ecuador->getCapital());
                            ui->txtsuperficie->setValue(Ecuador->getSuperficie());

                            for (int i = 0; i < limitrofes_ecuador.size(); ++i) {
                                ui->limitrofe->addItem(limitrofes_ecuador[i]);
                            }

                            for (int i = 0; i < translimitrofes_ecuador.size(); ++i) {
                                ui->translimitrofe->addItem(translimitrofes_ecuador[i]);
                            }

                            for (int i = 0; i < bandera_ecuador.size(); ++i) {
                                ui->bandera->addItem(bandera_ecuador[i]);
                            }

                            QPixmap pixmap(":/imagenes/Ecuador.png");
                            ui->banderas->setPixmap(pixmap);

                            }
                            else{
                                if(ui->rburuguay->isChecked()){
                                ui->titulo->setText(Uruguay->getName());
                                ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(142, 175, 203); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                                ui->txtcapital->setText(Uruguay->getCapital());
                                ui->txtsuperficie->setValue(Uruguay->getSuperficie());

                                for (int i = 0; i < limitrofes_uruguay.size(); ++i) {
                                    ui->limitrofe->addItem(limitrofes_uruguay[i]);
                                }

                                for (int i = 0; i < translimitrofes_uruguay.size(); ++i) {
                                    ui->translimitrofe->addItem(translimitrofes_uruguay[i]);
                                }

                                for (int i = 0; i < bandera_uruguay.size(); ++i) {
                                    ui->bandera->addItem(bandera_uruguay[i]);
                                }

                                QPixmap pixmap(":/imagenes/Uruguay.png");
                                ui->banderas->setPixmap(pixmap);

                                }
                                else{
                                    if(ui->rbparaguay->isChecked()){
                                    ui->titulo->setText(Paraguay->getName());
                                    ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(246, 226, 98); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                                    ui->txtcapital->setText(Paraguay->getCapital());
                                    ui->txtsuperficie->setValue(Paraguay->getSuperficie());

                                    for (int i = 0; i < limitrofes_paraguay.size(); ++i) {
                                        ui->limitrofe->addItem(limitrofes_paraguay[i]);
                                    }

                                    for (int i = 0; i < translimitrofes_paraguay.size(); ++i) {
                                        ui->translimitrofe->addItem(translimitrofes_paraguay[i]);
                                    }

                                    for (int i = 0; i < bandera_paraguay.size(); ++i) {
                                        ui->bandera->addItem(bandera_paraguay[i]);
                                    }

                                    QPixmap pixmap(":/imagenes/Paraguay.png");
                                    ui->banderas->setPixmap(pixmap);

                                    }
                                    else{
                                        if(ui->rbcolombia->isChecked()){
                                        ui->titulo->setText(Colombia->getName());
                                        ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(246, 226, 98); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                                        ui->txtcapital->setText(Colombia->getCapital());
                                        ui->txtsuperficie->setValue(Colombia->getSuperficie());

                                        for (int i = 0; i < limitrofes_colombia.size(); ++i) {
                                            ui->limitrofe->addItem(limitrofes_colombia[i]);
                                        }

                                        for (int i = 0; i < translimitrofes_colombia.size(); ++i) {
                                            ui->translimitrofe->addItem(translimitrofes_colombia[i]);
                                        }

                                        for (int i = 0; i < bandera_colombia.size(); ++i) {
                                            ui->bandera->addItem(bandera_colombia[i]);
                                        }

                                        QPixmap pixmap(":/imagenes/Colombia.png");
                                        ui->banderas->setPixmap(pixmap);

                                        }
                                        else{
                                            if(ui->rbguyana->isChecked()){
                                            ui->titulo->setText(Guyana->getName());
                                            ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(142, 175, 203); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                                            ui->txtcapital->setText(Guyana->getCapital());
                                            ui->txtsuperficie->setValue(Guyana->getSuperficie());

                                            for (int i = 0; i < limitrofes_guyana.size(); ++i) {
                                                ui->limitrofe->addItem(limitrofes_guyana[i]);
                                            }

                                            for (int i = 0; i < translimitrofes_guyana.size(); ++i) {
                                                ui->translimitrofe->addItem(translimitrofes_guyana[i]);
                                            }

                                            for (int i = 0; i < bandera_guyana.size(); ++i) {
                                                ui->bandera->addItem(bandera_guyana[i]);
                                            }

                                            QPixmap pixmap(":/imagenes/Guyana.png");
                                            ui->banderas->setPixmap(pixmap);

                                            }
                                            else{
                                                if(ui->rbguyana_fra->isChecked()){
                                                ui->titulo->setText(Guyana_francesa->getName());
                                                ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(186, 218, 132); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                                                ui->txtcapital->setText(Guyana_francesa->getCapital());
                                                ui->txtsuperficie->setValue(Guyana_francesa->getSuperficie());

                                                for (int i = 0; i < limitrofes_guyanafran.size(); ++i) {
                                                    ui->limitrofe->addItem(limitrofes_guyanafran[i]);
                                                }

                                                for (int i = 0; i < translimitrofes_guyanafran.size(); ++i) {
                                                    ui->translimitrofe->addItem(translimitrofes_guyanafran[i]);
                                                }

                                                for (int i = 0; i < bandera_guyanafran.size(); ++i) {
                                                    ui->bandera->addItem(bandera_guyanafran[i]);
                                                }



                                                }
                                                else{
                                                    if(ui->rbsuriname->isChecked()){
                                                    ui->titulo->setText(Suriname->getName());
                                                    ui->titulo->setStyleSheet("QLabel#titulo{background-color: rgb(246, 226, 98); font: bold 25px;color: white; padding: 6px;border-radius:19px;}");
                                                    ui->txtcapital->setText(Suriname->getCapital());
                                                    ui->txtsuperficie->setValue(Suriname->getSuperficie());

                                                    for (int i = 0; i < limitrofes_suriname.size(); ++i) {
                                                        ui->limitrofe->addItem(limitrofes_suriname[i]);
                                                    }

                                                    for (int i = 0; i < translimitrofes_suriname.size(); ++i) {
                                                        ui->translimitrofe->addItem(translimitrofes_suriname[i]);
                                                    }

                                                    for (int i = 0; i < bandera_suriname.size(); ++i) {
                                                        ui->bandera->addItem(bandera_suriname[i]);
                                                    }

                                                    QPixmap pixmap(":/imagenes/Suriname.png");
                                                    ui->banderas->setPixmap(pixmap);

                                                    }

    }

}}}}}}}}}}}}

void MainWindow::on_pushButton_2_clicked()
{
   /*
    int number = ui->txtsuperficie->value();
    QString resultado;
    if(number<1000000)
      resultado = "Es un país pequeño";
    else{
        if(number>1000000&&number<5000000)
            resultado = "Es un país mediano";
        else {
            if(number>5000000)
                resultado = "Es un país grande";}}
 ui->txtresultado->setText(resultado);
 */

}


void MainWindow::on_txtsuperficie_valueChanged(int arg1)
{
    int number = ui->txtsuperficie->value();
    QString resultado;
    if(number<1000000)
      resultado = "Es un país pequeño";
    else{
        if(number>1000000&&number<5000000)
            resultado = "Es un país mediano";
        else {
            if(number>5000000)
                resultado = "Es un país grande";}}
 ui->txtresultado->setText(resultado);
}
