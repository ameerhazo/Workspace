#include <cstdlib>
#include <iostream> //std::cout
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <array>
#include <numeric> //std::iota

// int main()
// {

// std::vector<int> myVec(10);
// std::iota(std::begin(myVec),std::end(myVec), 0);

// for(int i = 0; i < myVec.size(); ++i)
// {
//     std::cout<<myVec[i]<<"\n";
// }

// for(auto y: myVec) std::cout<<y<<"\n";

// int val = 8;

// if((val % 2) == 0)
// {

//     std::cout<<val<<" is an even number"<<std::endl;

// }else
// {
//     std::cout<<val<<" is an odd number"<<std::endl; 
// }

////////////////////////////////////////////////////////Vector exercise finding the even
// std::string sQuestion = "Until what number: ";
// std::cout<<sQuestion;
// std::string sNum;
// getline(std::cin,sNum);
// int nNum = stoi(sNum);
// std::vector<int> myVec(nNum);
// std::iota(myVec.begin(),myVec.end(),1);

// std::cout<<"0"<<std::endl; // 0 is always an even number

// for(int i = 0; i <= myVec.size(); ++i)
// {

//     int numToPrintOut = myVec[i];

//     if((numToPrintOut % 2) == 0)
//     {
//         std::cout<<numToPrintOut<<std::endl;

//     }
//     else if(((numToPrintOut%2) != 0) && (numToPrintOut == 0))
//     {

//         continue;

//     }

// }

///////////////////////////////////////////////////////////Function

// double AddNumbers(double num1, double num2);

// void AssignAge(int age);
// int AssignAge2(int age);

// int main()
// {

// double num1, num2;
// std::cout<<"Enter num1: ";
// std::cin>> num1;
// std::cout<<"Enter num2: ";
// std::cin>> num2;
// printf("%.1f + %.1f = %.1f",num1,num2,AddNumbers(num1,num2));

// int age = 43;
// std::cout<<"Old age: "<<age<<std::endl;
// age = AssignAge2(age);
// std::cout<<"New Age "<< age << "\n";





    
// return 0;

// }

// double AddNumbers(double num1, double num2)
// {
// return num1 + num2;
// }

// void AssignAge(int age){

//     age = 24;

// }

// int AssignAge2(int age)
// {

//     age = 24;
//     return age;
// }

////////////////////////////////////////////////////////////pointers
// void AssignAge(int*Age);
// int main()
// {

//     int Age = 43;
//     int *pAge = NULL;

//     pAge = &Age; //& reference operator;

//     std::cout<<"Address of Age: "<<pAge<<std::endl;

//     std::cout<<"Old age :"<<*pAge<<std::endl;

//     std::cout<<"Old age with Age: "<<Age<<std::endl;


//     AssignAge(&Age);

//     std::cout<<"New Age : "<<Age<<std::endl;

//     std::cout<<"\n\n";

//     int intArray[] = {1,2,3,4};
//     int *pintArray = intArray;

//     // pintArray = intArray;

//     for(int i = 0; i < (sizeof(intArray)/sizeof(int)); i++)
//     {

//         std::cout<<intArray[i]<<std::endl;

//     }

//     std::cout<<"\n\n";

//     for(int i = 0; i < (sizeof(intArray)/sizeof(int)); i++)
//     {

//         std::cout<<(*pintArray + i)<<" is at Address: "<<pintArray + i <<std::endl;


//     }


//     return 0;
// }

// void AssignAge(int *Age)
// {
//     *Age = 24;

// }

////////////////////////////////////////////////////////////pointer2
// void DoubleArray(int* arr, int size);

// ///Function
// void DoubleArray(int *arr, int size)
// {

//     for(int i = 0; i < size ; i++)
//     {

//         arr[i] *= 2;

//     }

// }



// int main()
// {

//     int nArray[] = {1,2,3,4,5};
    
//     int *pnArray  = NULL;

//      pnArray = nArray;

//     DoubleArray(nArray,sizeof(nArray)/sizeof(int));

//     for(auto i : nArray)
//     {

//         std::cout<<i<<std::endl;

//     }






//     return 0;
// }
//////////////////////////////////////////////////////////////////////problem
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
double investment = 0.0, interestRate = 0.0;
std::cout<<"How much to invest: ";
std::cin >> investment;
std::cout<<"interest rate: ";
std::cin >> interestRate;
interestRate *= .01;
for(auto y: Range(1,10,1))
{

    investment += (investment * interestRate);

}

std::cout<<"Value after 10 years : "<<investment<<"\n";


    return 0;
}