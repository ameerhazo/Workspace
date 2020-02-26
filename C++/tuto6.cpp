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

// std::vector<std::string> StringToVector(std::string theString,char separator);

// std::vector<std::string> StringToVector(std::string theString,char separator)
// {
//     std::vector<std::string> vecsWords;
//     std::stringstream ss(theString);
//     std::string sIndivStr;

//     while(getline(ss,sIndivStr,separator))
//     {

//         vecsWords.push_back(sIndivStr);
//     }
//     return vecsWords;

// }
/////////////////////////////////////////////////////////////////////vector to String
// std::string VectorToString (std::vector<std::string>& theVector, char separator);

// std::string VectorToString (std::vector<std::string>& theVector, char separator)
// {
//     std::string custNames;

//     for(int i = 0; i < theVector.size(); i++)
//     {
//     custNames.append(theVector[i]);
//     custNames += separator;

//     }

//     return custNames;



// }
///////////////////////////////////////////////////////////////trim white space
// std::string TrimWhitespace(std::string theString);

// std::string TrimWhitespace(std::string theString)
// {

//     std::string whitespaces(" \t\f\n\r");

//     theString.erase(theString.find_last_not_of(whitespaces) + 1);
//     theString.erase(0, theString.find_first_not_of(whitespaces));

//     return theString;
// }
///////////////////////////////////////////////////////////////////////searching for phrase 

//  std::vector<int> FindSubstringMatches(std::string theString, std::string theWord);

//  std::vector<int> FindSubstringMatches(std::string theString, std::string theWord)
// {
//     std::vector<std::string> vecsWords;

//     std::stringstream ss(theString);

//     std::string sIndivStr;

//     char space = ' ';

//     while(getline(ss,sIndivStr,space))
//     {
//         vecsWords.push_back(sIndivStr);
//     }

//     std::vector<int> returnVal(vecsWords.size());

//     for(int i = 0; i < vecsWords.size(); i++)
//     {

//         if(vecsWords[i] == theWord)
//         {
//             returnVal[i] = 1;
//         }
//         else
//         {
//             returnVal[i] = 0;
//         }
        

//     }

// return returnVal;
 ///////////////////////////////////searching for phrase alternate
//  std::vector<int> matchingIndexes;
//  int index = theString.find(theWord,0); 
//  while (index != std::string::npos)
//  {
//      matchingIndexes.push_back(index);
//      index = theString.find(theWord,index + 1);
//  }
   
// return matchingIndexes;


// }

// std::string ReplaceAllSubstrings(std::string theString, std::string substring, std::string newString);

// std::string ReplaceAllSubstrings(std::string theString, std::string substring, std::string newString)
// {
//     std::vector<int> matches = FindSubstringMatches(theString,substring);

//     if(matches.size() != 0)
//     {
//         int lengthDifference = newString.size() - substring.size();
//         int timesLooped = 0;

//         for(auto index: matches)
//         {
//             theString.replace(index + (timesLooped * lengthDifference),substring.size(),newString);
//             timesLooped++;
//         }

// return theString;


//     }


// }
/////////////////////////////////////////////////////CaesarCipher (theString,shift,encrypt or decrypt)

// std::string CaesarCipher(std::string toProcess, int numShift, bool enordeCipher);

// std::string CaesarCipher(std::string toProcess, int numShift, bool enordeCipher)
// {
// int lengthOfString = toProcess.size();

// std::string returnString;

// int charCode = 0;

// char letter;



// //to encipher
// if(enordeCipher == true)
// {

// for(int i = 0 ; i < lengthOfString ; i++)
// {
//     if(isalpha(toProcess[i]))
//     {
//         charCode = (int)toProcess[i];
//         charCode += numShift;

//         if(isupper(toProcess[i]))
//         {
//             if(charCode > (int)'Z')
//             {
//                 charCode -= 26;

//             }else if(charCode < (int)'A')
//             {
//                 charCode += 26;
//             }

//         }
//         else
//         {
//             if(charCode > (int)'z')
//             {
//                 charCode -= 26;
//             }else if(charCode < (int)'a')
//             {
//                 charCode += 26;
//             }
//         }


//         // char let2en = toProcess[i];
//         // int charCode  = let2en;
//         // int encipherCode = charCode + numShift;
//         // secretMessage += char(encipherCode);
//         // std::cout<<char(encipherCode);
//     }
//     letter = charCode;
//     returnString += letter;
//     else
//     {
//     letter = c;
//     returnString += c;  
//     }

// }

// return returnString;

// }

// to decipher 
// else if(enordeCipher == false)
// {
//     std::string originalMessage;

// for(int i = 0; i < lengthOfString; i++)
// {
//     char let2de = toProcess[i];
//     int charCode = let2de;
//     int decipherCode = charCode - numShift;
//     originalMessage[i] = char(decipherCode);
// }

// return originalMessage;
// }


// }
//////////////////////////////////////////////////////////////solve equation


std::vector<std::string> StringtoVector(std::string theString, char separator);

std::vector<std::string> StringtoVector(std::string theString, char separator)
{
std::vector<std::string> vecsWords;
std::string sIndivStr;
std::stringstream ss(theString);


while(getline(ss,sIndivStr,separator))
{
    vecsWords.push_back(sIndivStr);
}
    return vecsWords;
}

void SolveforX(std::string eq);

void SolveforX(std::string eq)
{

std::vector<std::string> theEquation = StringtoVector(eq,' ');

int num1 = std::stoi(theEquation[2]);
int num2 = std::stoi(theEquation[4]);
int numSolve = num2 - num1;

if(theEquation[2].strcmp('+'))
std::cout<<"x = "<<numSolve<<std::endl;

}

int main()
{

// std::vector<std::string> vec = StringToVector("This is a random string",' ');

// for(auto y: vec)
// std::cout<<y<<std::endl;
/////////////////////////////////////////////////////////////////////vector to String
// std::vector<std::string> vCusts(3);

// vCusts[0] = "Bob";
// vCusts[1] = "Sue";
// vCusts[2] = "Tom";

// std::string sCusts = VectorToString(vCusts,' ');

// std::cout<<sCusts<<std::endl;
///////////////////////////////////////////////////////////////trim white space


// std::string aStr = "           Just some random words               ";
// aStr = TrimWhitespace(aStr);
// std::cout<<"*"<<aStr<<std::endl;
///////////////////////////////////////////////////////////////////////searching for phrase and replacing

// std::string phrase = "To be or not to be";
// std::vector<int> matches = FindSubstringMatches(phrase, "be");

// for(int i = 0; i < matches.size(); ++i)
// {
//     std::cout<<matches[i]<<std::endl;
// }

// std::cout<<ReplaceAllSubstrings("to know or not to know", "know","be")<<std::endl;
////////////////////////////////////////////////////////////////////

// char letterZ = 'Z';
// char num3 = '3';
// char aSpace = ' ';

// std::cout<<"Is z a letter or number "<<isalnum(letterZ)<<std::endl;
// std::cout<<"Is z a letter "<<isalpha(letterZ)<<std::endl;
// std::cout<<"Is z an uppercase letter "<<isupper(letterZ)<<std::endl;
// std::cout<<"Is z a lowercase letter "<<islower(letterZ)<<std::endl;
// std::cout<<"Is 3 a number "<<isdigit(num3)<<std::endl;
// std::cout<<"Is space a space "<<isspace(aSpace)<<std::endl;
////////////////////////////////////////////////////////////caesar cipher

// std::string theString = "Make me secret";
// std::string encryptedStr = CaesarCipher(theString, 5, true);
// std::cout<<encryptedStr<<std::endl;
// std::string decryptedStr = CaesarCipher(encryptedStr,5,false);

/////////////////////////////////////////////////////////solve equation

std::cout<<"Enter an equation to solve: ";
std::string  equation = " ";
getline(std::cin,equation);
SolveforX(equation);




    return 0;
}
