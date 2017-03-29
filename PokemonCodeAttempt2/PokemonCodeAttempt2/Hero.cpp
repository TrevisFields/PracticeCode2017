#include "Hero.h"
#include "Rival.h"

Hero::Hero(std::string heroName, int heroStartingLevel) : _heroName(heroName), _heroLevel(heroStartingLevel)
{
  
}

Hero::~Hero()
{
  
}

std::string Hero::Greeting()
{
  return _heroName + ":\"Lets begin on our journey.\"";
}
