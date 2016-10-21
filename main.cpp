#include <iostream>
#include <stdlib.h>

int main()
{
    int guessAmounts;
    int actualNumber;
    int guessedNumber;
    int lowRange;
    int highRange;
    std::cout<<"Enter how many guesses you want"<<std::endl;
    std::cin>>guessAmounts;
    std::cout<<"Enter your lower range"<<std::endl;
    std::cin>>lowRange;
    std::cout<<"Enter your higher range"<<std::endl;
    std::cin>>highRange;
    actualNumber = rand() % highRange + lowRange;
    for(int x=1;x<=guessAmounts;x++){
        std::cout<<"Enter your "<<x<<"st "<<"guess"<<std::endl;
        std::cin>>guessedNumber;
        if(guessedNumber==actualNumber){
            std::cout<<"You guessed correctly in "<<x<<" guesses CONGRATULATIONS!!!!!!"<<std::endl;
            break;
        }
        else if (guessedNumber<actualNumber){
            std::cout<<"You are low"<<std::endl;
        }
        else if (guessedNumber>actualNumber){
            std::cout<<"You are high (probably weed)"<<std::endl;
        }
    }
    return 0;
}
