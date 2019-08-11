/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 11-8-2019
*/
#include <iostream>

using namespace std;

int main()
{
    for(int j=0;j<=4;j++)
    {
        for(int i=0;i<j;i++)
            {
                cout<<" ";
            }
        for(int k=4;k>=j;k--)
            cout<<"*";

    cout<<endl;
    }
}
