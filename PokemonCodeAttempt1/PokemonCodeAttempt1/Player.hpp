#ifndef Player_hpp
#define Player_hpp
#include <string>

class Player
{
private:
  std::string _name;
  
public:
  Player(std::string name);
  ~Player();
  
  std::string getName()
  { return _name; }
  
};


#endif /* Player_hpp */
