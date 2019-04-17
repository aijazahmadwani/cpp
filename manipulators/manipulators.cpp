/*
Author : Aiajz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 4 /4 2019*/
// program to use various manipulators in c++
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //********************manipulator operator*************************

    //endl : newline operator
    cout << "AIJAZ" << endl << "AHMAD" << endl<< "WANI"<< endl;  
    
    //*******************manipulator functions*************************

    //setw() used to set width
    cout << setw(5)<<1<<endl;

    //setfill('*') to fill empty spaces
    cout << setw(10)<<setfill('*')<<2<<endl; 

    //setprecision() to set no. of decimal places in float data
    float pi =22 / 7.0;
    cout << setprecision(4)<<pi<<endl; 


    return 0;
    
}