#include "Fjardedelsnot.h"

Fjardedelsnot::Fjardedelsnot(int hojd, int plats) : Not(hojd, plats)
{
	if (hojd > 0)
	{
		_Qpixmap.load("Resources/quarter.png");
	}
	else
	{
		_Qpixmap.load("Resources/quarterc.png");
	}
	_langd = 500;
}


Fjardedelsnot::~Fjardedelsnot()
{
}
