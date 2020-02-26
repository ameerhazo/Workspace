#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int g_iRandNum = 0; //global variable

const double PI = 3.14159;


int main()
{
    // bool bMarried = true;

    // char chMyGrade = 'A';

    // unsigned short int u16Age = 43;

    // short int siWeight = 180;

    // int nDays = 7;

    // long lBigNum = 1100000;

    // float fPi = 3.15159;

    // float fBigFloat = 1.1111111111;

    // float fBigFloat2 = 1.1111111111;

    // float fFloatSum = fBigFloat + fBigFloat2;

    // printf("fFloatSum Precision: %.10f\n",fFloatSum);

    // double dbBigFloat = 1.1111111111111111111111111;



    // long double ldPi = 3.14159;

    // auto whatWillIBe = true;

    // std::cout << "Min bool" << 
    //         std::numeric_limits<bool>::min()<<"\n";
    // std::cout << "Max bool" << 
    //         std::numeric_limits<bool>::max()<<"\n";

    // std::cout<<"Min double"<<
    //         std::numeric_limits<double>::min()<<"\n";
    // std::cout<<"Max double"<<
    //         std::numeric_limits<double>::max()<<"\n";

    // std::cout<<"Min long"<<
    //         std::numeric_limits<long>::min()<<"\n";
    // std::cout<<"Max long"<<
    //         std::numeric_limits<long>::max()<<"\n";

    
    // std::cout<<"size of int "<<sizeof(int)<<"\n";  

    ///////////////////////////////////////////////////////string

    // std::string sQuestion ("Enter Number 1 : ");
    // std::string sNum1, sNum2;

    // //print string
    // std::cout<<sQuestion;

    // //receive string
    // getline(std::cin, sNum1);

    // std::cout<<"Enter Number 2 : ";

    // getline(std::cin,sNum2);

    // int nNum1 = std::stoi(sNum1);
    // int nNum2 = std::stoi(sNum2);

    // printf("Number 1 is: %d\n",nNum1);

    // printf("Number 2 is: %d\n",nNum2);

    // printf("%d + %d = %d\n\n",nNum1,nNum2,(nNum1 + nNum2));

    // printf("%d - %d = %d\n\n",nNum1,nNum2,(nNum1 - nNum2));

    // printf("%d * %d = %d\n\n",nNum1,nNum2,(nNum1 * nNum2));

    // printf("%d / %d = %d\n\n",nNum1,nNum2,(nNum1 / nNum2));

    // printf("%d % %d = %d\n\n",nNum1,nNum2,(nNum1 % nNum2));

    //////////////////////////////////////////////////////////////////Exercise (convert miles to km)

    std::string sDistance;
    
    std::string sQuestion ("Enter distance in miles :\n");

    std::cout<<sQuestion;

    getline(std::cin,sDistance);

    float nDistance = std::stof(sDistance);

    printf("Distance in miles is: %f\n",nDistance);

    float miletokm = 1.609344;

    float DistanceinKms = nDistance * miletokm;

    printf("%f miles in kilometres is %.2f\n\n",nDistance,DistanceinKms);

    std::cout<<nDistance<<" in miles is "<<DistanceinKms<<" in kilometres\n";





    



    





    return 0;
}