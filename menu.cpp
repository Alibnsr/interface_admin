#include "menu.h"
#include "ui_menu.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QTimer>
#include <QDebug>

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    qDebug() << "Pilotes SQL disponibles :" << QSqlDatabase::drivers();

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("172.19.0.123");
    db.setUserName("adminqt");
    db.setPassword("password123");
    db.setDatabaseName("ecofit");
    db.setPort(3306);

    if (!db.open()) {
        qDebug() << "Erreur de connexion MySQL :" << db.lastError().text();
        return;
    }

    updateSensorValues();

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Menu::updateSensorValues);
    timer->start(10000);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::updateSensorValues()
{
    if (!db.isOpen()) {
        qDebug() << "Base de données non connectée !";
        return;
    }

    QSqlQuery query;
    if (query.exec("SELECT temperature, humidite FROM sensors ORDER BY created_at DESC LIMIT 1")) {
        if (query.next()) {
            double temp = query.value(0).toDouble();
            double hum = query.value(1).toDouble();

            ui->labelTempValue->setText(QString::number(temp) + " °C");
            ui->labelHumValue->setText(QString::number(hum) + " %");

            qDebug() << "Temp :" << temp << ", Hum :" << hum;
        } else {
            qDebug() << "Aucune donnée.";
        }
    } else {
        qDebug() << "Erreur SQL :" << query.lastError().text();
    }
}

void Menu::on_btnAccueil_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}

void Menu::on_btnCapteurs_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
}

void Menu::on_btnSignalement_clicked() {
    ui->stackedWidget->setCurrentIndex(2);
}

void Menu::on_btnParametres_clicked() {
    ui->stackedWidget->setCurrentIndex(3);
}

void Menu::on_btnHistorique_clicked() {
    // À compléter
}
