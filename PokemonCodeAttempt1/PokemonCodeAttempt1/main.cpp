#include "Player.h"
#include "Rival.h"
#include <iostream>


using namespace std;

void DisplayPlayerInfo(Player theHero);
void DisplayRivalInfo(Rival theVilian);
void Taunt(Rival theVilian);
void Greeting(Player theHero);

int main()
{
  //DISPLAY PLAYER INFORMATION
  auto player1 = Player("Trevis", 1);
  DisplayPlayerInfo(player1);
  Greeting(player1);
  
  //FOR LOOP TO CREATE SPACE IN XCODE DEBUGGER
  int i = 0;
  for(i = 0; i <= 5; i++)
  {
	 cout << "\n-\n";
  			i++;
  }
  
  //DISPLAY RIVAL INFORMATION
  auto rival1 = Player("Rival", 4);
  //DisplayRivalInfo(rival1);
	 // Taunt(rival1);
  
  //FOR LOOP TO CREATE SPACE IN XCODE DEBUGGER
  int j = 0;
  for(j = 0; j<= 5; j++)
	 {
		cout << "\n-\n";
			 j++;
	 }
  
  cout << "COMPILED CODE SUCCESSFULLY UP UNTIL THIS POINT.\n GOOD JOB SO FAR!!!";
  getchar();
  return 0;
}

  /*****************************************************************************************
-- VOID FUNCTIONS -- VOID FUNCTIONS -- VOID FUNCTIONS -- VOID FUNCTIONS -- VOID FUNCTIONS --
  *****************************************************************************************/
  //DISPLAY PLAYER INFO
void DisplayPlayerInfo(Player theHero)
{
  cout << theHero.getPName() << " is a level " << theHero.getLevel() << " and is just begining their journey." << endl;
}
  //DISPLAY RIVAL INFO
void DisplayRivalInfo(Rival theVilian)
{
  cout << theVilian.getRName() << " is a level " << theVilian.getLevel() << " and is stronger than you." << endl;
}
  //DISPLAY PLAYER GREETING MESSAGE
void Greeting(Player theHero)
{
  cout << theHero.Greeting();
}

void Taunt(Rival theVilian)
{
  cout << theVilian.Taunt();
}
