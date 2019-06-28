/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 27-06-2019
Roll No. 18600006*/
// OPERATIOR OVERLOADING
// Addition of two complex numbers

#include <iostream>

using namespace std;

class num
{
    private:
        float real,img;
    public:
        num1()
        {
            real=0;
            img=0;
        }
        void getnum()
        {
            cout<<"Enter real part : ";
            cin>>real;
            cout<<"Enter imaginary part : ";
            cin>>img;
        }
        num operator +(num t)
        {
            num result;
            result.real = real+t.real;
            result.img = img+t.img;

            return (result);
        }

        void show()
        {
            cout<<"Addition of two complex No.'s = ";
            cout<<real;
            if(img<0)
                cout<<" "<<img<<"i";
            else
                cout<<" + "<<img<<"i";

        }

};


int main()
{
    num n1,n2,n3;
    cout<<"First Real Number  "<<endl;
    n1.getnum();
    cout<<"Second Real Number  "<<endl;
    n2.getnum();
    n3 = n1+n2;
    n3.show();

}
