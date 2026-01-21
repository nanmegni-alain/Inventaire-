#pragma once
#include "typepetitmateriel.h"


class Petitmateriel {

public:
	Petitmateriel(typepetitmateriel type);

	typepetitmateriel getType() const;
	bool isA(typepetitmateriel type) const;


private:
	       typepetitmateriel type;

};
