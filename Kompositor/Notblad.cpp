#include "Notblad.h"


Notblad::Notblad()
{
}

Notblad::~Notblad()
{
}

void Notblad::adderaNot(Nottyp not, int hojd)
{
	Not *newNot = new Not(hojd);

	_notVector.push_back(newNot);
}

vector<Not*> Notblad::hamtaNoter() const
{
	return _notVector;
}