#include "Materielspecifique.h"

Materielspecifique::Materielspecifique(std::string nommaterielspecifique):nommaterielspecifique_(nommaterielspecifique)
{
}

std::string Materielspecifique::getNommaterielspecifique() const
{
	return nommaterielspecifique_;
}
