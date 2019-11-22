#include "ProjectPark.h"

ProjektPark3::ProjektPark3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.spinBox->setMaximum(0);
}

void ProjektPark3::pokazInfo()
{
	
	if (ilosc == 0 || kontener[wskaz] == nullptr)
	{
		return;
	}
	
	ui.nazwaEdit->setText(QString::fromStdString(kontener[wskaz]->zwrocNazwe()));
	ui.rokEdit->setText(QString::number(kontener[wskaz]->zwrocRok()));
	ui.drzewaEdit->setText(QString::number(kontener[wskaz]->zwrocDrzewa()));
	ui.lawkiEdit->setText(QString::number(kontener[wskaz]->zwrocLawki()));
	ui.pomnikiEdit->setText(QString::number(kontener[wskaz]->zwrocPomniki()));
	ui.festynEdit->setText(QString::fromStdString(kontener[wskaz]->zwrocFestyn()));
	ui.kaczkiEdit->setText(QString::number(kontener[wskaz]->zwrocKaczki()));
	ui.labedzieEdit->setText(QString::number(kontener[wskaz]->zwrocLabedzie()));
	ui.hustawkiEdit->setText(QString::number(kontener[wskaz]->zwrocHustawki()));
	ui.kolorEdit->setText(QString::fromStdString(kontener[wskaz]->zwrocKolor()));
	ui.graphicsView->setScene(&scena);
	
	ui.nazwaEdit->setReadOnly(1);
	ui.rokEdit->setReadOnly(1);
	ui.drzewaEdit->setReadOnly(1);
	ui.lawkiEdit->setReadOnly(1);
	ui.pomnikiEdit->setReadOnly(1);
	ui.festynEdit->setReadOnly(1);
	ui.labedzieEdit->setReadOnly(1);
	ui.kaczkiEdit->setReadOnly(1);
	ui.hustawkiEdit->setReadOnly(1);
	ui.kolorEdit->setReadOnly(1);
	
	if (obraz.load(QString::fromStdString(kontener[wskaz]->zwrocFoto())));
	{
		scena.setSceneRect(obraz.rect());
		scena.clear();
		scena.addPixmap(obraz);
		ui.graphicsView->fitInView(obraz.rect());
	}
}

void ProjektPark3::nowyPark(Park* p)
{
	kontener.push_back(p);
	ilosc++;
	ui.spinBox->setMaximum(ilosc);
}

void ProjektPark3::nowyRzeczny(Park_rzeczny* r)
{
	kontener.push_back(r);
	ilosc++;
	ui.spinBox->setMaximum(ilosc);
}

void ProjektPark3::nowyPlac(Plac_zabaw* z)
{
	kontener.push_back(z);
	ilosc++;
	ui.spinBox->setMaximum(ilosc);
}

void ProjektPark3::nowyPark()
{
	nowyPark(new Park);
}

void ProjektPark3::nowyRzeczny()
{
	nowyRzeczny(new Park_rzeczny);
}

void ProjektPark3::nowyPlac()
{
	nowyPlac(new Plac_zabaw);
}

void ProjektPark3::ustawWskaz()
{
	if (ilosc != 0)
	{
		ui.spinBox->setMinimum(1);
		wskaz = ui.spinBox->value() - 1;
	}

	if (ilosc == 0) wskaz = ui.spinBox->value();
	
	
	if (ui.spinBox->value() == 0)
	{
		ui.nazwaEdit->clear();
		ui.rokEdit->clear();
		ui.drzewaEdit->clear();
		ui.lawkiEdit->clear();
		ui.pomnikiEdit->clear();
		ui.festynEdit->clear();
		ui.kaczkiEdit->clear();
		ui.labedzieEdit->clear();
		ui.hustawkiEdit->clear();
		ui.kolorEdit->clear();
		scena.clear();
	}
	
}

void ProjektPark3::usunOstatni()
{
	if (ilosc != 0)
	{
		kontener.pop_back();
		ilosc--;
		ui.spinBox->setMaximum(ilosc);
		ustawWskaz();
	}
}

void ProjektPark3::usunWszyst()
{
	if (ilosc != 0)
	{
		kontener.clear();
		ilosc = 0;
		ui.spinBox->setMaximum(ilosc);
		ustawWskaz();
	}
}

void ProjektPark3::powitanie()
{
	QMessageBox b;
	if (ilosc == 0 || kontener[wskaz] == nullptr)
	{
		return;
	}
	b.setText(QString::fromStdString(kontener[wskaz]->powitanie()));
	b.setWindowTitle("Powitanie");
	b.exec();
}
