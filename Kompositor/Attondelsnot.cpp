#include "Attondelsnot.h"

Attondelsnot::Attondelsnot(int hojd, int plats) : Not(hojd, plats)
{
	if (hojd > 0)
	{
		_Qpixmap.load("Resources/eight.png");
	}
	else
	{
		_Qpixmap.load("Resources/eightc.png");
	}
	_langd = 250;
}


Attondelsnot::~Attondelsnot()
{
}
