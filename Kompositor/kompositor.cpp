
#include <qdebug.h>
#include "kompositor.h"

Kompositor::Kompositor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	connect(ui.radioButton_half, SIGNAL(clicked()), this, SLOT(halvnotKlickad()));
	connect(ui.radioButton_quarter, SIGNAL(clicked()), this, SLOT(fjardedelsnotKlickad()));
	connect(ui.radioButton_eight, SIGNAL(clicked()), this, SLOT(attondelsnotKlickad()));
	connect(ui.pushButton_spela, SIGNAL(clicked()), this, SLOT(spelaKlickad()));
}

Kompositor::~Kompositor()
{

}

void Kompositor::mousePressEvent(QMouseEvent *e)
{
	int plats = e->x();
	int hojd = pixelToHojd(e->y());
	if (hojd != -1)
	{
		_notblad.adderaNot(_valdNotTyp, hojd, plats);

	}
	update();

	/*switch (e->button()){
		case Qt::MouseButton::LeftButton:
			
			break;

		case Qt::MouseButton::RightButton:
			break;
	}

	*/
}

void Kompositor::paintEvent(QPaintEvent *e)
{
	vector<Not*> notVector = _notblad.hamtaNoter();
	for (int i = 0; i < notVector.size(); i++)
	{
		//int xPos = ui.label_notblad->x() + 80 + i*notVector[i]->hamtaLangd()*0.1 /*(notVector[i]->hamtaLangd() * 0.05)*/;
		//int xPos = 100;
		//qDebug() << xPos;
		notVector[i]->skrivUt(this);
	}
}

int Kompositor::pixelToHojd(int yPixel){
	int yPos = ui.label_notblad->y() + 26;
	int yLokalPos = yPixel - yPos;
	int step = 8;
	int antalHojder = 12;
	int hojd = -1;
	if (yLokalPos >= 0 && yLokalPos < (antalHojder)* step)
	{
		hojd = (antalHojder - 1) - yLokalPos / step;
	}
	qDebug() << hojd;
	return hojd;
}

int Kompositor::pixelToBredd(int xPixel){
	int xPos = ui.label_notblad->x() + 80;
	int xLokalPos = xPixel - xPos;
	int step = 10;
	int antalBredder = 12;
	int hojd = -1;
	if (xLokalPos >= 0 && xLokalPos < (antalBredder)* step)
	{
		hojd = (antalBredder - 1) - xLokalPos / step;
	}
	qDebug() << hojd;
	return hojd;
}

void Kompositor::fjardedelsnotKlickad()
{
	_valdNotTyp = Notblad::Nottyp::Fjardedel;
}

void Kompositor::halvnotKlickad()
{
	_valdNotTyp = Notblad::Nottyp::Halv;
}

void Kompositor::attondelsnotKlickad()
{
	_valdNotTyp = Notblad::Nottyp::Attondel;
}

void Kompositor::spelaKlickad()
{
	vector<Not*> notVector = _notblad.hamtaNoter();
	Not* swap;
	for (int i = 0; i < notVector.size(); i++)
	{
		for (int j = 0; j < notVector.size()-1; j++)
		{
			if (notVector[j]->hamtaPlats() > notVector[j+1]->hamtaPlats())
			{
				swap = notVector[j];
				notVector[j] = notVector[j + 1];
				notVector[j + 1] = swap;
			}
		}
	}
	for (int i = 0; i < notVector.size(); i++)
	{
		notVector[i]->spelaUpp(&_synthesizer);
	}
}