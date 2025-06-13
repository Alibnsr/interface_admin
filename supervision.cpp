#include "supervision.h"
#include "ui_supervision.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>


#include "supervision.h"
#include "ui_supervision.h"

Supervision::Supervision(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    // === STYLE GÉNÉRAL ===
        this->setStyleSheet("");

        // === LOGO ARRONDI ===
        ui->toolButton->setIcon(QIcon(":/images/ecofit.png"));
        ui->toolButton->setIconSize(QSize(80, 80));
        ui->toolButton->setFixedSize(100, 100);
        ui->toolButton->setStyleSheet(
            "QToolButton {"
            " background-color: #338508;"
            " border-radius: 50px;"
            " padding: 10px;"
            " margin-bottom: 20px;"  // <- espace entre logo et texte
            " border: none;"
            " qproperty-icon: url(:/images/ecofit.png);"
            " qproperty-iconSize: 80px;"
            "}"
        );


        // === TITRE CENTRÉ ===
        ui->label_3->setText("SUPERVISION DES CAPTEURS");
        ui->label_3->setStyleSheet("color: #00FF7F; font-weight: bold; font-size: 24px;");
        ui->label_3->setAlignment(Qt::AlignCenter);

        // === ICÔNE HUMIDITÉ ===
        ui->hum->setIcon(QIcon(":/images/humidite.png"));
        ui->hum->setIconSize(QSize(40, 40));
        ui->hum->setFixedSize(50, 50);
        ui->hum->setStyleSheet(
            "QToolButton {"
            " background: transparent;"
            " border: none;"
            " qproperty-icon: url(:/images/humidite.png);"
            " qproperty-iconSize: 40px;"
            "}"
        );

        // === ICÔNE TEMPÉRATURE ===
        ui->temp->setIcon(QIcon(":/images/temperature.jpg"));
        ui->temp->setIconSize(QSize(40, 40));
        ui->temp->setFixedSize(50, 50);
        ui->temp->setStyleSheet(
            "QToolButton {"
            " background: transparent;"
            " border: none;"
            " qproperty-icon: url(:/images/temperature.jpg);"
            " qproperty-iconSize: 40px;"
            "}"
        );

        // === LABELS DES CAPTEURS ===
        ui->label->setText("Capteur humidité :");
        ui->label->setStyleSheet("color: white; font-size: 18px;");
        ui->label_2->setText("Capteur température :");
        ui->label_2->setStyleSheet("color: white; font-size: 18px;");
        ui->label_3->setStyleSheet(
            "color: #00FF7F; font-weight: bold; font-size: 24px; margin-top: 20px;"
        );

        // === VALEURS CAPTEURS ===
        ui->val_hum->setText("55%");
        ui->val_hum->setStyleSheet("color: #FFD700; font-weight: bold; font-size: 20px;");
        ui->val_temp->setText("22.5 °C");
        ui->val_temp->setStyleSheet("color: #FFD700; font-weight: bold; font-size: 20px;");

        // === CADRE PRINCIPAL ===
        ui->frame->setStyleSheet(
            "QFrame#frame {"
            " background-color: #2e2e2e;"
            " border-radius: 20px;"
            " padding: 20px;"
            "}"
        );

    qDebug() << "Pilotes SQL disponibles :" << QSqlDatabase::drivers();
    // Connexion à la base de données
        db = QSqlDatabase::addDatabase("QMYSQL");

        db.setHostName("127.0.0.1");
        db.setUserName("adminqt");     // adminqt
        db.setPassword("password123"); // password123
        db.setDatabaseName("ecofit");

    if (!db.open()) {
        qDebug() << "Erreur de connexion MySQL :" << db.lastError().text();
        return;
    }

    updateSensorValues(); // Récupère les valeurs si la connexion réussit
}


Supervision::~Supervision()
{
    delete ui;
}

//  Fonction pour récupérer les valeurs des capteurs
void Supervision::updateSensorValues()
{
    if (!db.isOpen()) {
        qDebug() << " Base de données non connectée !";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT temperature, humidite FROM capteurs ORDER BY created_at DESC LIMIT 1");



    if (query.exec()) {
        if (query.next()) {
            float temp = query.value("temperature").toFloat();
            float hum = query.value("humidite").toFloat();

            qDebug() << " Température reçue :" << temp;
            qDebug() << " Humidité reçue :" << hum;

            // Vérifie si les labels existent avant de modifier le texte
            if (ui->val_temp && ui->val_hum) {
                ui->val_temp->setText(QString::number(temp) + " °C");
                ui->val_hum->setText(QString::number(hum) + " %");
            } else {
                qDebug() << " QLabel non trouvé ! Vérifie les noms dans Qt Designer.";
            }
        } else {
            qDebug() << "Aucune donnée trouvée dans la table `sensors`.";
        }
    } else {
        qDebug() << " Erreur SQL :" << query.lastError().text();
    }
}



