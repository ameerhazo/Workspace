#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <array>

int main()
{

    // std::string askQuestion ("What is your age?");

    // std::string sAge;

    // // std::cout<<askQuestion;

    // std::cout<<"How old are you?";

    // getline(std::cin,sAge);

    // int nAge = std::stoi(sAge);

    // if ((nAge >= 1) && (nAge<=18))
    // {
    //     std::cout<<"Important Birthday\n";
    // }else if((nAge == 21) || (nAge == 50))
    // {
    //   std::cout<<"Important Birthday\n";
    // }
    // else if (nAge >= 65)
    // {
    //     std::cout<<"Important Birthday\n";
    // }
    // else{
    //     std::cout<<"Not an important Birthday\n";
    // }

/////////////////////////////////////////////////////////////////////////////////////////

    // std::string sAgeofChild;

    // std::cout<<"How old is the child";

    // getline(std::cin,sAgeofChild);

    // int nAgeofChild = std::stoi(sAgeofChild);

    // if(nAgeofChild == 5)
    // {
    //     std::cout<<"Child goes to kindergarten";
    // }
    // else if((nAgeofChild >= 6) && (nAgeofChild <= 17))
    // {
    //     std::cout<<"1st to 12th grader";
    // }
    // else{
    //     std::cout<<"Child is not a child anymore";
    // }

////////////////////////////////////////////////////////////////////////////////Arrays

    // int arrNums[10] = {1};

    // int arrNums2[] = {1,2,3};

    // int arrNums3[5] = {8,9};

    // std::array<int,5>arrNums;

    // arrNums = {1,2,3,4,5};

    // int arrNums4[3][2][2] ={{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}} ;                 //[page],[row],[column]

    // std::array<int,1>arrNums2;

    // arrNums2 = {90};

    // for(int i = 0; i < arrNums.size(); i++ )
    // {
    //     std::cout<<arrNums[i]<<std::endl;

    // }
    
    // std::cout<<"The only number in this array is "<<arrNums2[0]<<"\n";

    // arrNums[0] = {10};


    // for(int i = 0; i < arrNums.size(); i++ )
    // {
    //     std::cout<<arrNums[i]<<"\n"<<std::endl;

    // }

    // std::cout<<"Number is: "<<arrNums4[2][1][1]<<std::endl;

    // std::cout<<"Array size :"<<sizeof(arrNums3)/sizeof(*arrNums3)<<std::endl;

/////////////////////////////////////////////////////////////////vectors

    // std::vector<int> vecnRandNums(2);
    // vecnRandNums[0] = 10;
    // vecnRandNums[1] = 20;
    // vecnRandNums.push_back(30);
    // std::cout<<"The last value is : "<<vecnRandNums[vecnRandNums.size() -1]<<"\n"<<std::endl;

///////////////////////////////////////////////////////////////String vectors

//     std::string sSentence = "This is a random string";
//     std::vector<std::string> vecsWords;
//     std:: stringstream ss(sSentence);
//     std::string sIndivStr; //temporary holding
//     char cSpace = ' ';

//     while(getline(ss,sIndivStr,cSpace))
//     {

//         vecsWords.push_back(sIndivStr);

//     }

//     for(int i = 0; i < vecsWords.size(); i++)
// {

//     std::cout<<vecsWords[i]<<"\n";

// }

///////////////////////////////////////////////Calculator
// Enter calculation

// std::string sQuestion = "Enter the first number: ";
// std::string sNum1, sNum2;
// std::cout<<sQuestion;
// getline(std::cin,sNum1);
// std::cout<<"Enter the second number: ";
// getline(std::cin,sNum2);
// int nNum1,nNum2;
// nNum1 = std::stoi(sNum1);
// nNum2 = std::stoi(sNum2);

// //////////plus

// std::cout<<nNum1<<" + "<<nNum2<<" = "<<(nNum1+nNum2)<<std::endl;

// ////////////minus

// std::cout<<nNum1<<" - "<<nNum2<<" = "<<(nNum1-nNum2)<<std::endl;

// //////////multiply

// std::cout<<nNum1<<" * "<<nNum2<<" = "<<(nNum1*nNum2)<<std::endl;

// //////////divide

// std::cout<<nNum1<<" / "<<nNum2<<" = "<<(nNum1/nNum2)<<std::endl;

////////////////////calc with vector

double dbNum1 = 0, dbNum2 = 0;

std::string sCalc = "";
std::vector<std::string> vecsCalc;

std::cout<<"Enter calculation (ex. 5+6) : ";
getline(std::cin,sCalc);

std::stringstream ss(sCalc);
std::string sIndivStr;
char cSpace = ' ';

while(getline(ss,sIndivStr,cSpace))
{

    vecsCalc.push_back(sIndivStr);


}

dbNum1 = std::stod(vecsCalc[0]);
dbNum2 = std::stod(vecsCalc[2]);

std::string operation = vecsCalc[1];

if(operation == "+")
{

    printf("%.1f + %.1f = %.1f\n",dbNum1,dbNum2,(dbNum1+dbNum2));

}
else if (operation == "-")
{

printf("%.1f - %.1f = %.1f\n",dbNum1,dbNum2,(dbNum1-dbNum2));

}
else if (operation == "*")
{
    printf("%.1f * %.1f = %.1f\n",dbNum1,dbNum2,(dbNum1*dbNum2));
}
else if(operation == "/")
{
    printf("%.1f / %.1f = %.1f\n",dbNum1,dbNum2,(dbNum1/dbNum2));
}
else{

std::cout<<"Invalid maths operation"<<std::endl;

}




    return 0;
}