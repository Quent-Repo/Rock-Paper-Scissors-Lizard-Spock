//grrkek
// Im to lazy to add in any more checks  

/*
                    Scissors cuts Paper

                    Paper covers Rock

                    Rock crushes Lizard

                    Lizard poisons Spock

                    Spock smashes Scissors

                    Scissors decapitates Lizard

                    Lizard eats Paper

                    Paper disproves Spock

                    Spock vaporizes Rock

                    (and as it always has) Rock crushes Scissors
*/
#include <iostream>
#include <math.h>
#include <time.h>

int main(){
  std::string options[5] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
  
  srand(time(NULL));
  int AI = rand() % 5;
  
  int user = 0;
  int W_User; 
  int W_AI;

  std::cout << "\n +++++++++++++++++++++\nRock , Paper , Scissors, Lizard, Spock\n +++++++++++++++++++++\n Rock = 0, Paper = 1, Scissors = 2 , Lizard = 3, Spock = 4\n Player Wins: " << W_User << "|||  AI wins: " << W_AI << "\n";
  std::cin >> user;

  std::string Heart = options[user];
  std::string Dagger = options[AI];

  if((Heart == options[0] && Dagger == options[2]) || (Heart == options[0] && Dagger == options[3])){std::cout << "Player Wins" << "\n";
  W_User += 1;}
  else if((Heart == options[1] && Dagger == options[2]) || (Heart == options[1] && Dagger == options[4])){std::cout << "Player Wins" << "\n";
  W_User = W_User + 1;}
  else if((Heart == options[2] && Dagger == options[0]) || (Heart == options[2] && Dagger == options[3])){std::cout << "Player Wins" << "\n";
  W_User = W_User + 1;}
  else{ 
    std::cout << "AI Wins" << "\n";
    W_AI = W_AI + 1;
    }
  std::cout << "Player Wins: "<< W_User << "|||  AI wins: " << W_AI << "\n";  
   std::cout << "\n" << Heart << "\n" << options[user]<< "\n";
  std::cout << Heart << " " << Dagger  << "\n" << "AI picked " << options[AI] << "\n";
    main();
    
}

