#pragma once
#include <string>
class Materielspecifique
{
public : 
	Materielspecifique(std::string nommaterielspecifique);

	std::string getNommaterielspecifique()const;


private:
	std::string nommaterielspecifique_;
};

