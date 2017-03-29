#include "Player.h"

Player::Player(std::string pName, int startingLevel) : _pName(pName), _level(startingLevel)
{
  
}

Player::~Player()
{
  
}

std::string Player::Greeting()
{
  return _pName + ": \"Lets begin our adventure!!!\"";
}
