#pragma once
#ifndef NOT_H
#define NOT_H

#include <QWidget>
#include <QPainter>
#include "Synthesizer.h"

class Not
{

public:
	Not(int hojd);
	~Not();

	void skrivUt(int xpos, QWidget *qw);
	void skrivUtC(int xpos);
	int hamtaLangd() const;
	/*int hojdToPixel(int hojd);*/
	void spelaUpp(Synthesizer *synth);

private:
	QPixmap _Qpixmap;
	int _langd;
	int _hojd;

};

#endif // NOT_H