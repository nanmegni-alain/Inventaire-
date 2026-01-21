#include "Inventaire.h"
#include <iostream>


Inventaire::Inventaire(std::string nommateriel, int nombre):nommateriel_(nommateriel) , nombre_(nombre)
{
}

void Inventaire::afficher()const
{
	std::cout << "NOM MATERIEL:" << nommateriel_ << std::endl;
	std::cout << "QUANTITE:" << nombre_ << std::endl;
}
