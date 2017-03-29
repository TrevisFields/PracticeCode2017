#pragma once
#include <string>

class Rival
{
private:
  int _rivalLevel = 0;
  std::string _rivalName;
public:
  Rival(std::string rivalName, int rivalStartingLevel);
  ~Rival();
  
  std::string getRivalName()
  {
	 return _rivalName;
  }
  
  int getLevel()
  {
	 return _rivalLevel;
  }
  std::string Taunt();
};
