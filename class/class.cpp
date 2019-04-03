/*Author: AIJAZ AHMAD WANI
email: aijazahmad9864@gmail.com
Date: 1/4/2019
*/
#include <iostream>
using namespace std;
class student{
    private:
    int roll_no;
    string name;
    int marks;
    public:
    //constructor
    student()
    {
        cout << "Object created! " << endl;
        roll_no = 0;
        //name = NULL;
        marks = 0;
    }
    void getstudent (int r,string n,int m)
    {
        roll_no = r;
        name = n;
        marks = m;
    }
    void display (void)
    {
        cout << "Roll No. = " << roll_no << endl;
        cout << "Name = " << name << endl;
        cout << "Marks = " << marks << endl;
    }
 };

    int main()
    {
        class student s1;
        s1.getstudent(1,"AIJAZ",500);
        s1.display();
        return 0;

    }



