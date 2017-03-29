#include "Rival.h"

Rival::Rival(std::string rName, int startingLevel) : _rName(rName), _level(startingLevel)
{
  
}

Rival::~Rival()
{
  
}

std::string Rival::Taunt()
{
  return _rName + ": \"You're going to lose to me everytime you come to this gym!!!\"";
}
