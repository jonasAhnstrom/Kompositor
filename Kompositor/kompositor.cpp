
#include <qdebug.h>
#include "kompositor.h"

Kompositor::Kompositor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	connect(ui.radioButton_quarter, SIGNAL(clicked()), this, SLOT(fjardedelsnotKlickad()));
	connect(ui.pushButton_spela, SIGNAL(clicked()), this, SLOT(spelaKlickad()));
}

Kompositor::~Kompositor()
{

}

void Kompositor::mousePressEvent(QMouseEvent *e)
{
	int hojd = pixelToHojd(e->y());
	if (hojd != -1)
	{
		_notblad.adderaNot(_valdNotTyp, hojd);
	}
	repaint();

	vector<Not*> notVector = _notblad.hamtaNoter();
	for (int i = 0; i < notVector.size(); i++)
	{
		//int xPos = +ui.label_notblad->x() + (i * notVector[i]->hamtaLangd());
		int xPos = 100;
		notVector[i]->skrivUt(xPos);
	}
}

int Kompositor::pixelToHojd(int ypixel){
	int yPos = ui.label_notblad->y() + 26;
	int yLokalPos = ypixel - yPos;
	int step = 8;
	int antalHojder = 12;
	int hojd = -1;
	if (yLokalPos >= 0 && yLokalPos < (antalHojder)* step){
		hojd = (antalHojder - 1) - yLokalPos / step;
	}
	qDebug() << hojd;
	return hojd;
}

void Kompositor::PaintEvent(QPaintEvent *e)
{
	
}

void Kompositor::fjardedelsnotKlickad()
{
	_valdNotTyp = Nottyp::Fjardedel;
}

void Kompositor::spelaKlickad()
{
	vector<Not*> notVector = _notblad.hamtaNoter();
	for (int i = 0; i < notVector.size(); i++)
	{
		notVector[i]->spelaUpp(&_synthesizer);
	}
}