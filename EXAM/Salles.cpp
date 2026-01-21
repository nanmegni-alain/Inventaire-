#include "Salles.h"
Salles::Salles(std::string nomsalle, SalleType type) : nomsalle_(nomsalle), type(type) {

};

std::string Salles::getNomsalle() const {
	return this->nomsalle_;
};

SalleType Salles::getType() const {
	return this->type;
}

bool  Salles::isA(SalleType type) const {
	return (this->type & type);
};