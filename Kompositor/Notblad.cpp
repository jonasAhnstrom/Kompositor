#include "Notblad.h"
#include "Fjardedelsnot.h"
#include "Halvnot.h"
#include "Attondelsnot.h"

Notblad::Notblad()
{
}

Notblad::~Notblad()
{
}

void Notblad::adderaNot(Nottyp not, int hojd, int plats)
{
	Not *nyNot;
	switch (not)
	{
	case Nottyp::Halv:
		nyNot = new Halvnot(hojd, plats);
		break;
	case Nottyp::Fjardedel:
		nyNot = new Fjardedelsnot(hojd, plats);
		break;
	case Nottyp::Attondel:
		nyNot = new Attondelsnot(hojd, plats);
		break;
	case Nottyp::Fjardedelspaus:
		nyNot = new Fjardedelsnot(hojd, plats);
		break;
	case Nottyp::Attondelspaus:
		nyNot = new Fjardedelsnot(hojd, plats);
		break;
	default:
		break;
	}
	_notVector.push_back(nyNot);
}

vector<Not*> Notblad::hamtaNoter() const
{
	return _notVector;
}