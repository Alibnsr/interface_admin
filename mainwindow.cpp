#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "supervision.h"
#include <QMessageBox>
#include <QDesktopWidget>
#include <QScreen>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->toolButton->setStyleSheet("background: transparent; border: none;");
    ui->toolButton->setIcon(QIcon(":/images/ecofit.png"));
    ui->toolButton->setStyleSheet(
        "QToolButton {"
        " background-color: #338508;"
        " border-radius: 50px;"  // Rend le fond arrondi
        " padding: 12px;"         // Laisse de la place autour de l'icône
        " border: none;"
        "}"
    );

    connect(ui->radioButton, &QRadioButton::toggled, this, &MainWindow::on_radioButton_toggled);
    centerWindow();
    validUsername = "adminqt";
    validPassword = "password123";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text(); // Récupère l'entrée username
    QString password = ui->lineEdit_password->text(); // Récupère l'entrée password

    if (username == validUsername && password == validPassword) {
        QMessageBox::information(this, "Login", "Connexion réussie !");

        // Création et affichage de la fenêtre de supervision
        Supervision *supervisionWindow = new Supervision();
        supervisionWindow->show();


        // Fermer la fenêtre actuelle après la connexion réussie
        this->close();
    }
    else {
        QMessageBox::warning(this, "Login", "Nom d'utilisateur ou mot de passe incorrect !");
    }
}



void MainWindow::on_radioButton_toggled(bool checked)
{
    if (checked) {
        // Afficher le mot de passe
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
    } else {
        // Masquer le mot de passe
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    }
}

void MainWindow::centerWindow()
{
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

