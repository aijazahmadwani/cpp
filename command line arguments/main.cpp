/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 30-7-2019
*/

//demonstrates command line arguments
#include <iostream>

using namespace std;

int main(int argc,char* argv[])
{
    cout<<"Total Arguments  =  "<<argc<<endl;
    for(int i=0;i<argc;i++)         // display arguments
    {
        cout<<argv[i]<<endl;
    }
    return 0;
}
