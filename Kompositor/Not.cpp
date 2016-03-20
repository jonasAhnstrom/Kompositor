
#include <qdebug.h>
#include "Not.h"

Not::Not(int hojd)
{
	_hojd = hojd;
	_langd = 500;
	//_Qpixmap.load(":/Kompositor/Resources/quarter.png");
	QPixmap pixmap(":/Kompositor/Resources/quarter.png");
	_Qpixmap = pixmap;
}

Not::~Not()
{
}

void Not::skrivUt(int xpos)
{
	//DrawWindow window(400, 200);
	//QPainter *pPainter = window.getPainter();
	
	QPainter qPainter;
	qPainter.drawPixmap(xpos, ((_hojd * 8) + 26), _Qpixmap);
}

int Not::hamtaLangd() const
{
	return _langd;
}

//int Not::hojdToPixel(int hojd){
//	int yPos = ui.label_notblad->y() + 26;
//	int step = 8;
//	qDebug() << (yPos + hojd * step);
//	return yPos + hojd * step;
//}

void Not::spelaUpp(Synthesizer *synth)
{
	synth->spela(_hojd, _langd, 120);
}