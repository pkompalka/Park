/********************************************************************************
** Form generated from reading UI file 'ProjektPark3.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJEKTPARK3_H
#define UI_PROJEKTPARK3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjektPark3Class
{
public:
    QAction *actionPlac_zabaw;
    QAction *actionPark;
    QAction *actionPark_rzeczny;
    QAction *actionUsu_ostatni;
    QAction *actionUsu_wszystkie;
    QWidget *centralWidget;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLineEdit *nazwaEdit;
    QLineEdit *rokEdit;
    QLabel *label_3;
    QLineEdit *drzewaEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lawkiEdit;
    QLineEdit *pomnikiEdit;
    QLineEdit *kaczkiEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *festynEdit;
    QLineEdit *labedzieEdit;
    QLineEdit *hustawkiEdit;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *kolorEdit;
    QSpinBox *spinBox;
    QPushButton *powitanieButton;
    QMenuBar *menuBar;
    QMenu *menuNowu;
    QMenu *menuUsu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProjektPark3Class)
    {
        if (ProjektPark3Class->objectName().isEmpty())
            ProjektPark3Class->setObjectName(QStringLiteral("ProjektPark3Class"));
        ProjektPark3Class->resize(818, 581);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        ProjektPark3Class->setFont(font);
        actionPlac_zabaw = new QAction(ProjektPark3Class);
        actionPlac_zabaw->setObjectName(QStringLiteral("actionPlac_zabaw"));
        actionPark = new QAction(ProjektPark3Class);
        actionPark->setObjectName(QStringLiteral("actionPark"));
        actionPark_rzeczny = new QAction(ProjektPark3Class);
        actionPark_rzeczny->setObjectName(QStringLiteral("actionPark_rzeczny"));
        actionUsu_ostatni = new QAction(ProjektPark3Class);
        actionUsu_ostatni->setObjectName(QStringLiteral("actionUsu_ostatni"));
        actionUsu_wszystkie = new QAction(ProjektPark3Class);
        actionUsu_wszystkie->setObjectName(QStringLiteral("actionUsu_wszystkie"));
        centralWidget = new QWidget(ProjektPark3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 60, 101, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(260, 130, 541, 391));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 71, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        nazwaEdit = new QLineEdit(centralWidget);
        nazwaEdit->setObjectName(QStringLiteral("nazwaEdit"));
        nazwaEdit->setGeometry(QRect(110, 30, 111, 20));
        nazwaEdit->setCursor(QCursor(Qt::ArrowCursor));
        rokEdit = new QLineEdit(centralWidget);
        rokEdit->setObjectName(QStringLiteral("rokEdit"));
        rokEdit->setGeometry(QRect(110, 80, 51, 20));
        rokEdit->setCursor(QCursor(Qt::ArrowCursor));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 81, 16));
        label_3->setFont(font2);
        drzewaEdit = new QLineEdit(centralWidget);
        drzewaEdit->setObjectName(QStringLiteral("drzewaEdit"));
        drzewaEdit->setGeometry(QRect(110, 130, 51, 20));
        drzewaEdit->setCursor(QCursor(Qt::ArrowCursor));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 180, 71, 16));
        label_4->setFont(font2);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 130, 71, 16));
        label_5->setFont(font2);
        lawkiEdit = new QLineEdit(centralWidget);
        lawkiEdit->setObjectName(QStringLiteral("lawkiEdit"));
        lawkiEdit->setGeometry(QRect(110, 180, 51, 20));
        lawkiEdit->setCursor(QCursor(Qt::ArrowCursor));
        pomnikiEdit = new QLineEdit(centralWidget);
        pomnikiEdit->setObjectName(QStringLiteral("pomnikiEdit"));
        pomnikiEdit->setGeometry(QRect(110, 230, 51, 20));
        pomnikiEdit->setCursor(QCursor(Qt::ArrowCursor));
        kaczkiEdit = new QLineEdit(centralWidget);
        kaczkiEdit->setObjectName(QStringLiteral("kaczkiEdit"));
        kaczkiEdit->setGeometry(QRect(110, 380, 51, 20));
        kaczkiEdit->setCursor(QCursor(Qt::ArrowCursor));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 280, 71, 16));
        label_6->setFont(font2);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 230, 91, 16));
        label_7->setFont(font2);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 380, 71, 16));
        label_8->setFont(font2);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 330, 81, 16));
        label_9->setFont(font2);
        festynEdit = new QLineEdit(centralWidget);
        festynEdit->setObjectName(QStringLiteral("festynEdit"));
        festynEdit->setGeometry(QRect(110, 280, 111, 20));
        festynEdit->setCursor(QCursor(Qt::ArrowCursor));
        labedzieEdit = new QLineEdit(centralWidget);
        labedzieEdit->setObjectName(QStringLiteral("labedzieEdit"));
        labedzieEdit->setGeometry(QRect(110, 330, 51, 20));
        labedzieEdit->setCursor(QCursor(Qt::ArrowCursor));
        hustawkiEdit = new QLineEdit(centralWidget);
        hustawkiEdit->setObjectName(QStringLiteral("hustawkiEdit"));
        hustawkiEdit->setGeometry(QRect(110, 430, 51, 20));
        hustawkiEdit->setCursor(QCursor(Qt::ArrowCursor));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 480, 91, 16));
        label_10->setFont(font2);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 430, 91, 16));
        label_11->setFont(font2);
        kolorEdit = new QLineEdit(centralWidget);
        kolorEdit->setObjectName(QStringLiteral("kolorEdit"));
        kolorEdit->setGeometry(QRect(110, 480, 111, 20));
        kolorEdit->setCursor(QCursor(Qt::ArrowCursor));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(380, 40, 51, 61));
        spinBox->setCursor(QCursor(Qt::PointingHandCursor));
        powitanieButton = new QPushButton(centralWidget);
        powitanieButton->setObjectName(QStringLiteral("powitanieButton"));
        powitanieButton->setGeometry(QRect(460, 10, 341, 111));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        powitanieButton->setFont(font3);
        powitanieButton->setCursor(QCursor(Qt::CrossCursor));
        ProjektPark3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProjektPark3Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 21));
        menuBar->setCursor(QCursor(Qt::PointingHandCursor));
        menuNowu = new QMenu(menuBar);
        menuNowu->setObjectName(QStringLiteral("menuNowu"));
        menuNowu->setCursor(QCursor(Qt::PointingHandCursor));
        menuUsu = new QMenu(menuBar);
        menuUsu->setObjectName(QStringLiteral("menuUsu"));
        menuUsu->setCursor(QCursor(Qt::PointingHandCursor));
        ProjektPark3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProjektPark3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ProjektPark3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProjektPark3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ProjektPark3Class->setStatusBar(statusBar);

        menuBar->addAction(menuNowu->menuAction());
        menuBar->addAction(menuUsu->menuAction());
        menuNowu->addAction(actionPark);
        menuNowu->addAction(actionPark_rzeczny);
        menuNowu->addAction(actionPlac_zabaw);
        menuUsu->addAction(actionUsu_ostatni);
        menuUsu->addAction(actionUsu_wszystkie);

        retranslateUi(ProjektPark3Class);
        QObject::connect(actionPlac_zabaw, SIGNAL(triggered()), ProjektPark3Class, SLOT(nowyPlac()));
        QObject::connect(actionPark, SIGNAL(triggered()), ProjektPark3Class, SLOT(nowyPark()));
        QObject::connect(actionPark_rzeczny, SIGNAL(triggered()), ProjektPark3Class, SLOT(nowyRzeczny()));
        QObject::connect(actionUsu_ostatni, SIGNAL(triggered()), ProjektPark3Class, SLOT(usunOstatni()));
        QObject::connect(actionUsu_wszystkie, SIGNAL(triggered()), ProjektPark3Class, SLOT(usunWszyst()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), ProjektPark3Class, SLOT(ustawWskaz()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), ProjektPark3Class, SLOT(pokazInfo()));
        QObject::connect(powitanieButton, SIGNAL(clicked()), ProjektPark3Class, SLOT(powitanie()));

        QMetaObject::connectSlotsByName(ProjektPark3Class);
    } // setupUi

    void retranslateUi(QMainWindow *ProjektPark3Class)
    {
        ProjektPark3Class->setWindowTitle(QApplication::translate("ProjektPark3Class", "ProjektPark3", nullptr));
        actionPlac_zabaw->setText(QApplication::translate("ProjektPark3Class", "Plac zabaw", nullptr));
        actionPark->setText(QApplication::translate("ProjektPark3Class", "Park", nullptr));
        actionPark_rzeczny->setText(QApplication::translate("ProjektPark3Class", "Park rzeczny", nullptr));
        actionUsu_ostatni->setText(QApplication::translate("ProjektPark3Class", "Usu\305\204 ostatni", nullptr));
        actionUsu_wszystkie->setText(QApplication::translate("ProjektPark3Class", "Usu\305\204 wszystkie", nullptr));
        label->setText(QApplication::translate("ProjektPark3Class", "Numer obiektu:", nullptr));
        label_2->setText(QApplication::translate("ProjektPark3Class", "Typ miejsca:", nullptr));
        label_3->setText(QApplication::translate("ProjektPark3Class", "Rok za\305\202o\305\274enia:", nullptr));
        label_4->setText(QApplication::translate("ProjektPark3Class", "Ilo\305\233\304\207 \305\202awek:", nullptr));
        label_5->setText(QApplication::translate("ProjektPark3Class", "Ilo\305\233\304\207 drzew:", nullptr));
        label_6->setText(QApplication::translate("ProjektPark3Class", "Trwa festyn:", nullptr));
        label_7->setText(QApplication::translate("ProjektPark3Class", "Ilo\305\233\304\207 pomnik\303\263w:", nullptr));
        label_8->setText(QApplication::translate("ProjektPark3Class", "Ilo\305\233\304\207 kaczek:", nullptr));
        label_9->setText(QApplication::translate("ProjektPark3Class", "Ilo\305\233\304\207 \305\202\304\205b\304\231dzi:", nullptr));
        label_10->setText(QApplication::translate("ProjektPark3Class", "Kolor hu\305\233tawek:", nullptr));
        label_11->setText(QApplication::translate("ProjektPark3Class", "Ilo\305\233\304\207 hu\305\233tawek:", nullptr));
        powitanieButton->setText(QApplication::translate("ProjektPark3Class", "Powitanie", nullptr));
        menuNowu->setTitle(QApplication::translate("ProjektPark3Class", "Dodaj", nullptr));
        menuUsu->setTitle(QApplication::translate("ProjektPark3Class", "Usu\305\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjektPark3Class: public Ui_ProjektPark3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTPARK3_H
