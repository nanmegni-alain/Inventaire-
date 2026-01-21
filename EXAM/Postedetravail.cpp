#include "Postedetravail.h"

Postedetravail::Postedetravail(std::string nomposte, std::string systemeexploitation, std::string puissancedetraitement) : nomposte_(nomposte),systemeexploitation_(systemeexploitation),puissancedetraitement_(puissancedetraitement){
	
	this->ecran = {};
	this->connectique = {};
	this->petitmateriel = {};
	this->materielreseau = {};
}

void Postedetravail::have(Materielreseau* materielreseau)
{
}

void Postedetravail::have(Ecran* ecran)
{
	this->have(ecran);
}

void Postedetravail::have(Connectique* connectique)
{
	this->have(connectique);
}

void Postedetravail::have(Petitmateriel* petitmateriel)
{
	this->have(petitmateriel);
}

std::ostream& operator<<(std::ostream& os, Postedetravail p) {
	for (Ecran* e : p.ecran) {
		os << (*e) << std::endl;
	}
	return os;
}
std::ostream& operator<<(std::ostream& os, Postedetravail p) {
	for (Connectique* c : p.connectique) {
		os << (*c) << std::endl;
	}
	return os;
}
std::ostream& operator<<(std::ostream& os, Postedetravail p) {
	for (Petitmateriel* t : p.petitmateriel) {
		os << (*t) << std::endl;
	}
	return os;
}