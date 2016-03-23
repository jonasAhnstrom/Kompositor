#pragma once
#ifndef NOTBLAD_H
#define NOTBLAD_H

#include <vector>
#include "Not.h"

using namespace std;



class Notblad
{
	
public:
	enum class Nottyp { Halv, Fjardedel, Attondel, Fjardedelspaus, Attondelspaus };
	Notblad();
	~Notblad();
	
	void adderaNot(Nottyp not, int hojd, int plats);
	vector<Not*> hamtaNoter() const;
private:
	vector<Not*> _notVector;
};

#endif // NOTBLAD_H