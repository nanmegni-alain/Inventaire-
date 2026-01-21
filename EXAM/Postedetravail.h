#pragma once
#include <vector>
#include <ostream>
#include <string>
#include "Ecran.h"
#include "Materielreseau.h"
#include "Petitmateriel.h"
#include "Connectique.h"


class Postedetravail {
private:
	std::vector<Ecran*> ecran;
	std::vector<Materielreseau*> materielreseau;
	std::vector<Petitmateriel*> petitmateriel;
	std::vector<Connectique*> connectique;
public:
	Postedetravail (std::string nomposte , std::string systemeexploitation, std::string puissancedetraitement);
	void have(Materielreseau*materielreseau);
	void have(Ecran* ecran);
	void have(Connectique* connectique);
	void have(Petitmateriel* petitmateriel);
	friend std::ostream& operator<<(std::ostream& os, Postedetravail p);

private: 
	std::string nomposte_;
	std::string systemeexploitation_;
	std::string puissancedetraitement_;


};

