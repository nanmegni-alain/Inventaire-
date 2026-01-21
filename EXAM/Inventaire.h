#pragma once
#include<string>
#include<Ecran.h>
#include<Postedetravail.h>
#include<Connectique.h>
#include<Petitmateriel.h>
#include<Materielreseau.h>

class Inventaire
{
public:
	Inventaire(std::string nommateriel , int nombre);

	void afficher()const ;


private:
	std::string nommateriel_;
	int nombre_; 
};

