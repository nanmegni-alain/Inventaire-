#include "Petitmateriel.h"


Petitmateriel::Petitmateriel(typepetitmateriel type) : type(type) {

};

typepetitmateriel Petitmateriel::getType() const {
	return this->type;
}

bool  Petitmateriel::isA(typepetitmateriel type) const {
	return (this->type & type);
};