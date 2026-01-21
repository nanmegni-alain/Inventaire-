#include "Ecran.h"

Ecran::Ecran(std::string nomecran, std::string taille, int resolution) : nomecran_(nomecran), taille_(taille) , resolution_(resolution)
{

}

std::string Ecran::getNomecran() const
{
	return this-> nomecran_;
}

std::string Ecran::getTaille() const
{
	return this->taille_;
}
int Ecran::getResolution() const
{
	return this->resolution_;
}
