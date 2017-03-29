#include "Rival.h"
#include "Hero.h"

Rival::Rival(std::string rivalName, int rivalStartingLevel) : _rivalName(rivalName), _rivalLevel(rivalStartingLevel)
{
  
}

Rival::~Rival()
{
  
}

std::string Rival::Taunt()
{
  return _rivalName + ":\"Im going to destroy everything you have worked hard for.\"";
}
