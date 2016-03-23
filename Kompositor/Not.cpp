
//#include <qdebug.h>
#include "Not.h"

Not::Not(int hojd, int plats)
{
	_hojd = hojd;
	_plats = plats;
	_langd = 500;
}

Not::~Not()
{
}

void Not::skrivUt(QWidget *qw)
{
	QPainter qp(qw);
	qp.drawPixmap(_plats, ( ((_hojd * 8) - 310) / -1 ), _Qpixmap);
}

int Not::hamtaLangd() const
{
	return _langd;
}

int Not::hamtaPlats() const
{
	return _plats;
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