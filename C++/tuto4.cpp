#include <cstdlib>
#include <iostream> //std::cout
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <array>
#include <numeric> //std::iota
#include <time.h>
#include <stdlib.h>


std:: vector<int> Range (int start,int max, int step);

std::vector<int> Range(int start,int max,int step)
{

    int i = start;
    

    std::vector<int> range;

    while(i <= max)
    {
        
        range.push_back(i);
        i+=step;
    }

return range;
    
}

int main()
{
// std::cout<<"How tall is the tree : ";
//////////////////////////////////////////////////////////////////
// int numberHash,row,lastRow,lastHash,height;

// std::cin>>height;

// lastHash = lastRow = row = numberHash = 1;

// for( row; row <= height; row++)
// {
//     std::cout<<std::string((height-row),' ')<<std::string(numberHash,'#')<<std::endl;
    
//     numberHash+=2;

// }

// std::cout<<std::string((height-lastRow),' ')<<std::string(lastHash,'#')<<std::endl;

// std::cout<<("Merry Christmas");
//////////////////////////////////////////////////////////////////////////////////

// int treeHeight = 0, spaces = 0, hashes = 1, stumpSpaces = 0;
// std::cin>>treeHeight;
// spaces = treeHeight - 1;
// stumpSpaces = treeHeight -1;

// while(treeHeight != 0)
// {
//     for(auto x : Range(1,spaces,1)) 
//         std::cout<<" ";

//     for(auto x : Range(1,hashes,1))
//         std::cout<<"#";
    
//     std::cout<<"\n";

//     spaces -= 1;
//     hashes += 2;
//     treeHeight -= 1;
// }

// for(auto x : Range(1,stumpSpaces,1))
//     std::cout<<" ";
//     std::cout<<"#";

//////////////////////////////////////////////////////Exception Handling
   

// double num1 = 0, num2 = 0;

// std::cout<<"Enter num1 : ";
// std::cin>> num1;
// std::cout<<"Enter num2 : ";
// std::cin>>num2;

// try{
//     if(num2 == 0)
//     {
//         throw "Division by zero is not possible";
//     }
//     else
//     {
//         printf("%.1f / %.1f = %.1f",num1,num2,(num1/num2));
//     }
// }

//     catch (const char* exp)
//     {
//         std::cout<<"Error :"<<exp<<"\n";

//     }
    
//     try{
//         std::cout<<"Throwing exception\n";
//         throw std::runtime_error("Error occured");
//         std::cout<<"Can you print me?\n";
//     }

//     catch(std::exception &exp)
//     {
//         std::cout<<"Handled Exception : "<<exp.what()<<"\n"; 
//     }
//     catch(...)
//     {
//         std::cout<<"Default Exception\n";
//     }
///////////////////////////////////////////////////////////////do while

    // srand(time(NULL)); // seed
    // int secretNum = std::rand() % 11;
    // int guess = 0;

    // do{
    //     std::cout<<"Guess the number : ";
    //     std::cin>> guess;
    //     if(guess > secretNum)
    //     {
    //         std::cout<<"Guessed number too big"<<std::endl;
    //     }
    //     if(guess < secretNum)
    //     {
    //         std::cout<<"Guessed number too small"<<std::endl;
    //     }
    // }while(secretNum != guess);

    // std::cout<<"You guessed it right!"<<std::endl;
////////////////////////////////////////////////////////////////////do while with a while loop

srand(time(NULL));
int secretNum = std::rand()%11;
int guess = 0;
bool IsGuess = true;

while(IsGuess)
{
    std::cout<<"Guess the number :";
    std::cin>>guess;
    if (secretNum != guess)
    {
        continue;
    }
    else if(secretNum == guess)
    {
        IsGuess = false;
    }

}

    std::cout<<"You guessed it correctly"<<std::endl;


   return 0;
   }