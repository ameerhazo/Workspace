#include <cstdlib>
#include <iostream> //std::cout
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <array>
#include <numeric> //std::iota
#include <time.h>   //time()
#include <stdlib.h> //srand
#include <algorithm>
#include <cmath>

int main()
{

//     // char cString[] = {'A',' ','S','t','r','i','n','g','\0'};

//     // std::cout<<"Array Size "<<sizeof(cString)<<std::endl;

//     std::vector<std::string> strVec(10);

//     std::string str("I'm a string");

//     strVec[0] = str;

//     std::cout<<str.front() <<" "<<str.back()<<"\n"; //str[] can also be used on strings, str.at(), str.front(),back

//     std::cout<<"Length "<<str.length()<<"\n";

//     std::cout<<"Size of vector "<<strVec.size()<<std::endl;

//     std::cout<<"Size of string "<<str.size()<<std::endl;

//     std::string str2(str);

//     strVec[1] = str2;

//     std::string str3(str,4);

//     strVec[2] = str3;

//     std::string str4(5,'x');

//     strVec[3] = str4;

//     strVec[4] = str.append(" and you're not");

//     str+= " and youre not";

//     strVec[5] = str;

//     str.append(str,34,37);

//     strVec[6] = str;

//     str.erase(13,str.length() - 1);
    
//     strVec[7] = str;

//     // std::cout<<str<<std::endl;

//     // std::cout<<strVec[0]<<std::endl;

//     // std::cout<<strVec[1]<<std::endl;

//     if(str.find("string") != std::string::npos)//npos = no match
//     {

//         std::cout<<"1st index "<<str.find("string")<<std::endl;
//     }

//     std::cout<<"Substr "<<str.substr(6,6)<<std::endl;

//    std::reverse(str.begin(),str.end());

//     std::cout<<"Reverse "<<str<<std::endl;

//     std::transform(str2.begin(),str2.end(),str2.begin(), ::toupper);

//     std::cout<<"Upper "<<str2<<std::endl;

//     std::transform(str2.begin(),str2.end(),str2.begin(), ::tolower);

//     std::cout<<"Lower "<<str2<<std::endl;

//     char aChar = 'Z';

//     int aInt = aChar;

//     std::cout<<"A Code "<<(int)'a'<<std::endl;

//     std::string strNum = std::to_string(1+2);

//     std::cout<<strNum<<std::endl;








    // for(auto y: strVec){

    //     std::cout<<y<<std::endl;
    // }

/////////////////////////////////////////////////////// 

// char aChar;
// do{
// std::cout<<"Enter a character: ";

// std::cin>>aChar;

// int aInt = aChar;

// // std::cout<<aInt<<std::endl;

// std::cout<<"The ASCII code for "<<aChar<<" is "<<aInt<<std::endl;

// }while(aChar != '#');




// while(true){

// int ACode;

// std::cout<<"Give a number between 65 - 90 or 97 - 122: ";

// std::cin>>ACode;

// if((65<=ACode<=90) && (97<=ACode<=122))

// {

// std::cout<<"The character for "<<ACode<<" is "<<char(ACode)<<std::endl;

// }
// else
// {
//     std::cout<<"Enter a valid ASCII code please"<<std::endl;
//     break;
// }
// }

////////////////////////////////////////////////

// std::string normalStr, secretStr = "";

// std::cout<<"Enter your string in uppercase: ";
// std::cin>>normalStr;

// for(char c: normalStr)
// {

//     secretStr += std::to_string((int)c);

   

// }

// std::cout<<"Secret : "<<secretStr<<std::endl;

// normalStr = "";

// for(int i = 0; i < secretStr.length(); i+=2)
// {
//     std::string sCharCode  = "";
//     sCharCode += secretStr[i];
//     sCharCode += secretStr[i+1];

//     int nCharCode = std::stoi(sCharCode);

//     char chCharCode = nCharCode;

//     normalStr += chCharCode;


// }



// std::cout<<"Secret revealed: "<<normalStr<<std::endl;

//////////////////////////////////////////////////////////
// std::string normalStr, secretStr = "";

// std::cout<<"Enter your string in uppercase: ";
// std::cin>>normalStr;

// for(char c: normalStr)
// {

//     secretStr += std::to_string((int)c - 23);

   

// }

// std::cout<<"Secret : "<<secretStr<<std::endl;

// normalStr = "";

// for(int i = 0; i < secretStr.length(); i+=2)
// {
//     std::string sCharCode  = "";
//     sCharCode += secretStr[i];
//     sCharCode += secretStr[i+1];

//     int nCharCode = std::stoi(sCharCode);

//     char chCharCode = nCharCode + 23;

//     normalStr += chCharCode;


// }



// std::cout<<"Secret revealed: "<<normalStr<<std::endl;
///////////////////////////////////////////////////
std::cout<<"abs(-10) "<<std::abs(-10)<<std::endl;
















    return 0;
}