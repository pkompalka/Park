#pragma once

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QFileDialog>
#include <cstdlib>
#include <iostream>
#include "ui_ProjektPark3.h"
#include "park.h"
#include "park_rzeczny.h"
#include "plac_zabaw.h"
#include "miejsce.h"

class ProjektPark3 : public QMainWindow
{
	Q_OBJECT

public:
	ProjektPark3(QWidget *parent = Q_NULLPTR);
	void nowyPark(Park* p);
	void nowyRzeczny(Park_rzeczny* p);	
	void nowyPlac(Plac_zabaw* p);

public slots:
void pokazInfo();
void nowyPark();
void nowyRzeczny();
void nowyPlac();
void ustawWskaz();
void usunOstatni();
void usunWszyst();
void powitanie();


private:
	Ui::ProjektPark3Class ui;
	QGraphicsScene scena;
	QPixmap obraz;
	vector <Place*> kontener;
	int ilosc = 0;
	int wskaz = 0;
};
