#include "Inventaire.h"

Inventaire::Inventaire(std::string nommateriel, int nombre):nommateriel_(nommateriel) , nombre_(nombre)
{
}

void Inventaire::afficher()const
{
	std::cout << "ECRAN :" << Ecran << std::endl;
}
