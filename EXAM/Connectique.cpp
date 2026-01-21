#include "Connectique.h"

Connectique::Connectique(std::string nameconnectique, std::string nomport) : nameconnectique_(nameconnectique) , nomport_(nomport)
{
}

std::string Connectique::getNameconnectique() const
{
    return nameconnectique_;
}

std::string Connectique::getNomport() const
{
    return nomport_ ;
}
