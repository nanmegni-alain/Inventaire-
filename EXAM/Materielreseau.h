#pragma once
#include<string>
class Materielreseau
{
public :
	Materielreseau(std::string nommateriel,std::string type);
	   
	std::string getNommateriel()const;

private:
	std::string nommateriel_;
	std::string type_;


};

