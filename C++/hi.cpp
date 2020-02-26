#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <array>
#include <numeric>
#include <cmath>

std::string stringManipulation (std::string inputString, int op);

std::string stringManipulation (std::string inputString, int op)
{

if(op == 1)
{

std::string up = toupper(inputString);







}





}
int main()
{


std::string pi = "Pi is" + std::to_string(M_PI);



return 0;
}

    // std::stringstream ss;
	// ss.str ("Hello World");
	// std::string Hi = ss.str();
	// std::cout<<Hi<<"\n"<<std::endl;

	//  std::array<int,5> numArr;


// int numArr[5];
// int startP = 11;

// std::iota(numArr,numArr + (sizeof(numArr)/sizeof(int)) ,11);


// std::cout<<sizeof(numArr)<<std::endl;

 
// for(int i = 0; i < (sizeof(numArr)/sizeof(int));i++)
// {

//     std::cout<<numArr[i]<<std::endl;

// }
// void DoubleArray(int* arr, int size);

// std::array<int,5> myArray;

// myArray = {1,2,3,4,5};

// int *pmyArray = myArray.data();

// int sizeArr = myArray.size();


// std::cout<<"The size of the array is "<<sizeArr<<std::endl;

// std::cout<<std::get<0>(myArray)<<"\n"<<std::endl;

//  for(auto i : myArray)
//  {

//  	std::cout<<i<<std::endl;

//  }

//  DoubleArray(myArray.data(),sizeArr);

//  std::cout<<"\n\n";

//  for(auto i : myArray)
//  {


// 	 std::cout<<i<<std::endl;


//  }

//     return 0;
// }


// void DoubleArray(int *arr, int size)
// {

//     for(int i = 0; i < size ; i++)
//     {

//         arr[i] *= 2;

//     }

// }