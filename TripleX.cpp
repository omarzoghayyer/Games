
#include <iostream>
#include <string>

int main ()
{
   const int CodeA = 1;
   const int CodeB = 3;
   const int CodeC = 3;

   const int CodeSum  = CodeA + CodeB + CodeC;
   const int CodeProduct = CodeA * CodeB * CodeC;

    


    // print CodeSum and CodeProducts to the terminal
    std::cout << std::endl;
    std::cout << " + There are 3 numbers in the code" << std::endl;
    std::cout << " + The code add-up to:  " << CodeSum << std::endl;
    std::cout << " + The code multiply to give: "<<  CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessProduct  = GuessA + GuessB + GuessC;
    int GuessSum = GuessA * GuessB * GuessC;   

    if (GuessSum == CodeSum)
    {
        std::cout << "You Win!";
    }
    else
    {
        std::cout << "Loser! haha" << std::endl;
    }
    

    return 0 ;
}
