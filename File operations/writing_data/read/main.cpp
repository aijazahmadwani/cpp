#include <iostream>
#include <fstream>
#include  <conio.h>
using namespace std;

int main()
{
    char ch;
    ifstream file;
    file.open("first.txt");
    ch=file.get();
    while(!file.eof())
    {
        cout<<ch;
        ch=file.get();
    }
    return 0;

}
