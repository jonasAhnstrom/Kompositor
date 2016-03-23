#pragma once
#ifndef NOT_H
#define NOT_H

#include <QWidget>
#include <QPainter>
#include "Synthesizer.h"

class Not
{

public:
	Not(int hojd, int plats);
	~Not();

	void skrivUt(QWidget *qw);
	void skrivUtC(int xpos);
	int hamtaLangd() const;
	int hamtaPlats() const;
	/*int hojdToPixel(int hojd);*/
	void spelaUpp(Synthesizer *synth);

protected:
	QPixmap _Qpixmap;
	int _langd;
	int _hojd;
	int _plats;

};

#endif // NOT_H