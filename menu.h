#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void updateSensorValues();
    void on_btnAccueil_clicked();
    void on_btnCapteurs_clicked();
    void on_btnSignalement_clicked();
    void on_btnParametres_clicked();
    void on_btnHistorique_clicked();

private:
    Ui::Menu *ui;
    QSqlDatabase db;
};

#endif // MENU_H
