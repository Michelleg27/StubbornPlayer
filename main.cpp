#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int response; 
  int won;
  

  cout<<"How many times would you want to play?"<<endl; 
  cin>>response;

  for (int i = 0; i < response; i++)
  {
    game.newGame(); 
  
    game.guessDoorC(); 
    game.guessDoorC();  
   
     if( game.isWinner() == true)
     {
         won++;
     }
  }
    cout<<"You've won "<<won<<" times!"<<endl;
  return 0;
}
