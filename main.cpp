#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  int total = 0;
  SecretDoor game;
  int numOfPlays;
  int wins =0;
  int loss =0;
  cout << "How many times do you want to play?" << endl;
  cin >> numOfPlays;


  do
  {   
      total++;
      game.guessDoorC();
      game.guessDoorC();
      if (game.isWinner())
      { 
        
        
        wins++;
      }else
      {
       loss++;
      }



  game.newGame();
   
  }while ( total < numOfPlays);

cout << "Your total games is: " << total;
cout << "you won: " << wins  << " times" << endl;
cout << "you loss: " << loss << " times" << endl;





  return 0;
}
