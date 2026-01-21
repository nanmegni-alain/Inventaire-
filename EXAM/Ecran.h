#pragma once
#include <string>
class Ecran
{
public : 
	Ecran(std::string nomecran , std::string taille, int resolution );
	std::string getNomecran() const;
	std::string getTaille() const;
	int getResolution()const;


private: 
	std::string nomecran_;
	std::string taille_;
	int resolution_;
	
};

