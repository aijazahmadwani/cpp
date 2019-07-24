/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 24-7-2019
*/
// structures in c++
#include <iostream>
#include <string.h>
using namespace std;
void display(struct book);
struct book input(void);
struct book
{
    int bookid;
    char title[30];
    float price;
};
int main()
{
   book b={1,"c by aijaz",400.50}; // initializing at declaration
   display(b);


   book b1;
   b1.bookid=12;
   strcpy(b1.title,"c++ by AIJAZ");
   b1.price=500;
   display(b1);

   book b3;
   b3 = input();
   display(b3);

}
void display(book b)
{
    cout<<"Book ID = "<<b.bookid<<endl;
    cout<<"Book Title = "<<b.title<<endl;
    cout<<"Book Price = "<<b.price<<endl;
}
struct book input(void)
{
    book x;
    cout<<"Enter Book Id : ";
    cin>>x.bookid;
    cout<<"Enter Book Title : ";
    cin>>x.title;
    cout<<"Enter Price : ";
    cin>>x.price;
    return (x);

};
