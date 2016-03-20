#pragma once
#ifndef NOTBLAD_H
#define NOTBLAD_H

#include <vector>
#include "Not.h"

using namespace std;

enum class Nottyp { halv, Fjardedel, Attondel, Fjardedelspaus, Attondelspaus };

class Notblad
{
	
public:
	Notblad();
	~Notblad();
	
	void adderaNot(Nottyp not, int hojd);
	vector<Not*> hamtaNoter() const;
private:
	vector<Not*> _notVector;
};

#endif // NOTBLAD_H