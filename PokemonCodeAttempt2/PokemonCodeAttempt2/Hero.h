#pragma once
#include <string>

class Hero
{
private:
  int _heroLevel = 0;
  std::string _heroName;
public:
  Hero(std::string heroName, int heroStartingLevel);
  ~Hero();
  
  std::string getHeroName()
  {
	 return _heroName;
  }
  
  int getLevel()
  {
	 return _heroLevel;
  }
  std::string Greeting();
};
