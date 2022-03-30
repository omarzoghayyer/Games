
#include <iostream>
#include <string>
#include <ctime>

void PrintIntroduction (int Difficulty)


{
    //print welcome messege and directions for players
    std::cout << "\n\nYou are a secret agent breaking into level  " << Difficulty;
    std::cout << "  secure server room...\n Enter the correct cofe to continue...\n\n";
}

bool PlayerGame(int Difficulty)

{  
      PrintIntroduction(Difficulty);

   const int CodeA = rand() % Difficulty + Difficulty;
   const int CodeB = rand() % Difficulty + Difficulty;
   const int CodeC = rand() % Difficulty + Difficulty;

   const int CodeSum  = CodeA + CodeB + CodeC;
   const int CodeProduct = CodeA * CodeB * CodeC;

    
    // print CodeSum and CodeProducts to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The code add-up to:  " << CodeSum;
    std::cout << "\n+ The code multiply to give: "<<  CodeProduct << std::endl;


    //store player guess
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >>  GuessC;

    int GuessSum  = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;      

    // check if players guess is correct

    if (GuessSum == CodeSum && CodeProduct == GuessProduct)
    {
        std::cout <<"congrats, transfering to next level... "<<  std::endl;
        return true;
    }
      else
    {
        std::cout << "\nLoser! haha, try again!";
        return false;
    } 


    
}

int main ()
{      
    srand(time(NULL)); //create new random sequene based on time of the day

    int LevelDifficulty = 1;
    const int MaxLevelOfDifficulty = 5;
    

    while (LevelDifficulty <= MaxLevelOfDifficulty) // loop game untill all levels are reached

    {
        // std::cout << rand() % 3 << "\n";
        bool bLevelComplete = PlayerGame(LevelDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); // Discards the buffer
    

        if (bLevelComplete){

            ++LevelDifficulty;
        }
    }

    std::cout <<  "\n *** Congrats! you have completed all levels ***\n";
    
    return 0;
    


}
