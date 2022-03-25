
#include <iostream>
#include <string>

void PrintIntroduction ()

{
    //print welcome messege and directions for players
    std::cout << "You are a secret agent breaking into a secure server room\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

void PlayerGame()

{


   const int CodeA = 1;
   const int CodeB = 3;
   const int CodeC = 3;

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

    if (GuessSum == CodeSum)
    {
        std::cout <<"You Win!" << std::endl;
    }
      else
    {
        std::cout << "\nLoser! haha";
    }


    
}

int main ()
{
    PrintIntroduction();
    PlayerGame();
    return 0;

}
