#include "ProjektPark3.h"
#include <QtWidgets/QApplication>
#include <vector>
#include "park.h"
#include "park_rzeczny.h"
#include "plac_zabaw.h"
#include "miejsce.h"
#include "ProjektPark3.h"
#include <list>
#include <iostream>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ProjektPark3 w;
	w.show();
	return a.exec();
}
