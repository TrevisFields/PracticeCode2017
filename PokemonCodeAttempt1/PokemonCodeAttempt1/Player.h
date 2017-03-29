#pragma once
#include <string>

class Player
{
private:
  int _level = 0;
  std::string _pName;
  
public:
  Player(std::string pName, int startingLevel);
  ~Player();
  
  std::string getPName()
  { return _pName; }
  
  int getLevel()
  {return _level; }
  
  std::string Greeting();
  
};



