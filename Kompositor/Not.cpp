
#include <qdebug.h>
#include "Not.h"

Not::Not(int hojd)
{
	if (hojd > 0)
	{
		_Qpixmap.load("Resources/quarter.png");
	}
	else
	{
		_Qpixmap.load("Resources/quarterc.png");
	}
	_hojd = hojd;
	_langd = 500;
}

Not::~Not()
{
}

void Not::skrivUt(int xpos, QWidget *qw)
{
	QPainter qp(qw);
	qp.drawPixmap(xpos, ( ((_hojd * 8) - 310) / -1 ), _Qpixmap);
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