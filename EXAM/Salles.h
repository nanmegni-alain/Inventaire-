#pragma once
#include<string>
#include "SalleType.h"
class Salles
{
public : 
	Salles(std::string nomsalle, SalleType type);
	std::string getNomsalle() const;
	SalleType getType() const;
	bool isA(SalleType type) const;

private : 
	std::string nomsalle_;
	SalleType type;
};

