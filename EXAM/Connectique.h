#pragma once
#include<string>
class Connectique
{
public:
	Connectique(std::string nameconnectique , std::string nomport);

	std::string getNameconnectique()const;
	std::string getNomport()const;
	  


private:
	std::string nameconnectique_;
	std::string nomport_;
};

