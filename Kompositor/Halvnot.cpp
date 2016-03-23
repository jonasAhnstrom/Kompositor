#include "Halvnot.h"

Halvnot::Halvnot(int hojd, int plats) : Not(hojd, plats)
{
	if (hojd > 0)
	{
		_Qpixmap.load("Resources/half.png");
	}
	else
	{
		_Qpixmap.load("Resources/halfc.png");
	}
	_langd = 1000;
}


Halvnot::~Halvnot()
{
}
