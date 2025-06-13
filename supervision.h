#ifndef SUPERVISION_H
#define SUPERVISION_H

#include <QWidget>  //  Ajouté pour éviter les erreurs de type incomplet
#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>


namespace Ui {
class Form;
}

class Supervision : public QMainWindow  //  Correct
{
    Q_OBJECT

public:
    explicit Supervision(QWidget *parent = nullptr);
    ~Supervision();
     void updateSensorValues();

private:
    Ui::Form *ui;
    QSqlDatabase db;
};

#endif // SUPERVISION_H
