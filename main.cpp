#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  int total = 0;//defining stuff
  SecretDoor game;
  int numOfPlays;
  int wins =0;
  int loss =0;
  cout << "How many times do you want to play?" << endl;
  cin >> numOfPlays;


  do //I think a do loop is works for this situation, a while or for loop would work too. 
  {   
      total++; // keeps track of total games played
      game.guessDoorC();//picks door c
      game.guessDoorC();//confirms that the user picks door c
      if (game.isWinner())//checks to see if user has won, but game.guessDoorC(); has to run at least twice. 
      { 
        
        
        wins++;//adds to wins count
      }else
      {
       loss++;//adds to loss count
      }



  game.newGame();//clears the "doors" so a new game can start
   
  }while ( total < numOfPlays);

cout << "Your total games is: " << total;
cout << "you won: " << wins  << " times" << endl;
cout << "you loss: " << loss << " times" << endl;





  return 0;
}
