/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *pushButton;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioButton;
    QToolButton *toolButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QLatin1String("*{\n"
"	font-family:century gothic;\n"
"	font-size:18px;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background:#333;\n"
"    border-radius:15px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background:#333;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"color:blue;\n"
"background:#338508;\n"
"border-radius:60px;\n"
"}\n"
"QLabel\n"
"{\n"
"color:white;\n"
"}\n"
"QPushButton\n"
"{\n"
"background:#338508;\n"
"color:white;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:#333;\n"
"border-radius:15px;\n"
"background:#2e96dd;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"QRadioButton\n"
"{\n"
"color:white;\n"
"\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 80, 551, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 340, 421, 51));
        lineEdit_username = new QLineEdit(frame);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(50, 140, 441, 31));
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #2b2b2b; /* Couleur de fond */\n"
"    color: #ffffff;           /* Couleur du texte */\n"
"\n"
"    padding: 5px;              /* Espacement interne */\n"
"    font-size: 16px;           /* Taille du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #00ff00; /* Couleur de bordure diff\303\251rente lorsque le champ est actif */\n"
"}\n"
""));
        lineEdit_password = new QLineEdit(frame);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(50, 250, 441, 41));
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #2b2b2b; /* Couleur de fond */\n"
"    color: #ffffff;           /* Couleur du texte */\n"
"\n"
"    padding: 5px;              /* Espacement interne */\n"
"    font-size: 16px;           /* Taille du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #00ff00; /* Couleur de bordure diff\303\251rente lorsque le champ est actif */\n"
"}\n"
""));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 181, 31));
        label_2->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: \"Verdana\";\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #4CAF50; /* Texte vert */\n"
"    text-shadow: 2px 2px 5px #000000; /* Ombre noire */\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 210, 181, 31));
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: \"Verdana\";\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: #4CAF50; /* Texte vert */\n"
"    text-shadow: 2px 2px 5px #000000; /* Ombre noire */\n"
"}"));
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 290, 251, 31));
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    font-family: \"Arial\";\n"
"    font-size: 14px;\n"
"    color: #FFFFFF; /* Texte blanc */\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 15px;\n"
"    height: 15px;\n"
"    border: 1px solid #4CAF50; /* Bordure verte */\n"
"    background-color: #333333; /* Fond gris fonc\303\251 */\n"
"    border-radius: 7px; /* Forme circulaire */\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #4CAF50; /* Fond vert lorsqu'il est s\303\251lectionn\303\251 */\n"
"    border: 1px solid #FFFFFF; /* Bordure blanche */\n"
"}\n"
""));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(270, 0, 121, 121));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Downloads/eco.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QApplication::translate("MainWindow", "Password", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Password", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "show password", nullptr));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
