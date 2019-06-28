/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 27-06-2019
Roll No. 18600006*/
// Addition of two matrices
// Addition of matrix and constant
#define row 2
#define column 3
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class matrix
{
    private:
        int element[row][column];
    public:

        void getmatrix()
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    cin>>element[i][j];
                }
            }
        }
        matrix operator + (matrix second)
        {
            matrix result;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                   result.element[i][j]=element[i][j]+second.element[i][j];
                }
            }
            return result;
        }
        void show()
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    cout<<"  ";
                    cout<<element[i][j];
                }
                cout<<endl;
            }

        }
        matrix operator +(int c)
        {
            matrix result;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    result.element[i][j]=element[i][j]+c;
                }
            }
            return result;
        }

};
int main()
{
    matrix a,b,result;
    int constant;
    int choice;
    while(1)
    {

    system("cls");
    cout<<"1.Addition of two matrices  "<<endl;
    cout<<"2. Addition of matrix and constant "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Enter first matrix elements : "<<endl;
            a.getmatrix();
            cout<<"Enter second matrix elements : "<<endl;
            b.getmatrix();
            cout<<"First matrix "<<endl;
            a.show();
            cout<<"Second matrix "<<endl;
            b.show();
            result = a + b;
            cout<<"Result matrix "<<endl;
            result.show();
            break;

        case 2:
            cout<<"Enter matrix elements : ";
            a.getmatrix();
            cout<<"Enter CONSTANT ";
            cin>>constant;
            result = a + constant;
            cout<<"Result matrix "<<endl;
            result.show();
            break;
    default:
        cout<<"Invalid choice "<<endl;

    }
    getch();

    }



}
