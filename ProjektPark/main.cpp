#include "ProjectPark.h"
#include <QtWidgets/QApplication>
#include <vector>
#include "park.h"
#include "parkWithRiver.h"
#include "playground.h"
#include "place.h"
#include "ProjectPark.h"
#include <list>
#include <iostream>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ProjectPark w;
	w.show();
	return a.exec();
}
