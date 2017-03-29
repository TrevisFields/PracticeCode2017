#pragma once
#include <string>

class Rival
{
private:
  int _level = 0;
  std::string _rName;
  
public:
  Rival(std::string rName, int startingLevel);
  ~Rival();
  
  std::string getRName()
  { return _rName; }
  
  int getLevel()
  {return _level; }
  
  std::string Taunt();
  
};



