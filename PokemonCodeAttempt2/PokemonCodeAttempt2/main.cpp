#include "Hero.h"
#include "Rival.h"
#include <iostream>

using namespace std;

void DisplayHeroMessageInfo(Hero theHero);
void DisplayRivalMessageInfo(Rival theRival);
void DisplayMessage();
void Greeting();
void Taunt();


int main()
{
  auto hero1 = Hero("Hero", 1);
  auto rival1 = Rival("Rival",3);
  
  //call and display Hero and Rival Message Info
	
  DisplayRivalMessageInfo(rival1);
  int i;
  for(i = 0; i <= 5; i++)
	 {
		cout << "\n";
		i++;
	 }
  
  Taunt();
  cout << "------------[PRESS ENTER TO CONTINUE]\n";
  getchar();
  DisplayHeroMessageInfo(hero1);
  int j;
  for(j = 0; j<= 5; j++)
	 {
		cout << "\n";
		j++;
	 }
  
  Greeting();
  cout << "------------[PRESS ENTER TO CONTINUE]\n";
  getchar();
  DisplayMessage();
  
  return 0;
}


/*****************************************************************************************
 -- VOID FUNCTIONS -- VOID FUNCTIONS -- VOID FUNCTIONS -- VOID FUNCTIONS -- VOID FUNCTIONS --
 *****************************************************************************************/
void DisplayHeroMessageInfo(Hero theHero)
{
  cout << "You are: " << theHero.getHeroName() << "\nYour current level is: " << to_string(theHero.getLevel());
}

void DisplayRivalMessageInfo(Rival theRival)
{
  cout << "They are: " << theRival.getRivalName() << "\nTheir current level is: " << to_string(theRival.getLevel());
}

void DisplayMessage()
{
  cout << "THIS IS THE END OF THE PROGRAM\n";
}

void Greeting(Hero theHero)
{
	 // cout << theHero.Greeting();
}

void Taunt(Rival theRival)
{
  //cout << theRival.Taunt();
}
