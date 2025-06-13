/********************************************************************************
** Form generated from reading UI file 'supervision.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERVISION_H
#define UI_SUPERVISION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QFrame *frame;
    QLabel *label;
    QToolButton *temp;
    QLabel *label_2;
    QToolButton *hum;
    QLabel *label_3;
    QLabel *val_hum;
    QLabel *val_temp;
    QToolButton *toolButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(780, 675);
        frame = new QFrame(Form);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 40, 651, 521));
        frame->setStyleSheet(QString::fromUtf8("/* Fond g\303\251n\303\251ral de l'interface */\n"
"QWidget {\n"
"    background-color: #2E2E2E;\n"
"    color: white;\n"
"    font-family: \"Century Gothic\";\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"/* Cadre principal */\n"
"QFrame#frame {\n"
"    background: #333;\n"
"    border-radius: 15px;\n"
"    padding: 15px;\n"
"}\n"
"\n"
"/* Titre principal */\n"
"QLabel#label_3 {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    color: #00FF7F;\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* Labels des capteurs */\n"
"QLabel#label_1, QLabel#label_2 {\n"
"    font-size: 16px;\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
"/* Valeurs des capteurs */\n"
"QLabel#val_temp, QLabel#val_hum {\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #FFD700; /* Jaune dor\303\251 */\n"
"}\n"
"\n"
"/* Ic\303\264nes des capteurs */\n"
"QToolButton#temp, QToolButton#hum {\n"
"    background: transparent;\n"
"    border: none;\n"
"    font-size: 24px;\n"
"}\n"
"\n"
"QToolButton#temp:hover, QToolButton#hum:hover {\n"
"  "
                        "  background: rgba(255, 255, 255, 0.2);\n"
"    border-radius: 10px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 100, 211, 51));
        temp = new QToolButton(frame);
        temp->setObjectName(QStringLiteral("temp"));
        temp->setGeometry(QRect(210, 100, 81, 51));
        temp->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: black; /* Fond noir */\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral("../../hum.png"), QSize(), QIcon::Normal, QIcon::Off);
        temp->setIcon(icon);
        temp->setIconSize(QSize(40, 40));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 230, 251, 51));
        hum = new QToolButton(frame);
        hum->setObjectName(QStringLiteral("hum"));
        hum->setGeometry(QRect(200, 230, 61, 51));
        hum->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: black; /* Fond noir */\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../temp.png"), QSize(), QIcon::Normal, QIcon::Off);
        hum->setIcon(icon1);
        hum->setIconSize(QSize(40, 40));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 50, 401, 51));
        label_3->setStyleSheet(QStringLiteral(""));
        val_hum = new QLabel(frame);
        val_hum->setObjectName(QStringLiteral("val_hum"));
        val_hum->setGeometry(QRect(390, 110, 131, 51));
        val_temp = new QLabel(frame);
        val_temp->setObjectName(QStringLiteral("val_temp"));
        val_temp->setGeometry(QRect(380, 230, 131, 51));
        toolButton = new QToolButton(Form);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(330, 20, 101, 71));
        toolButton->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"color:blue;\n"
"background:#338508;\n"
"border-radius:60px;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Downloads/eco.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(128, 128));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "Capteur humidit\303\251 :", nullptr));
        temp->setText(QApplication::translate("Form", "...", nullptr));
        label_2->setText(QApplication::translate("Form", "Capteur temp\303\251rature :", nullptr));
        hum->setText(QApplication::translate("Form", "...", nullptr));
        label_3->setText(QApplication::translate("Form", "               SUPERVISION DES CAPTEURS", nullptr));
        val_hum->setText(QString());
        val_temp->setText(QString());
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERVISION_H
