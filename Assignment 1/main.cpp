#include <iostream>
#include <conio.h>
#include <stdio.h>
# include <stdlib.h>
#include <string.h>
using namespace std;
class person
{
private:
    int age;
    string name;
    string address;
public:
    person()
    {
        age=0;
        name="";
        address="";
    }
    void getperson()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter address : ";
        cin>>address;
        cout<<"Enter age : ";
        cin>>age;
    }

    void displayperson()
    {
        cout<<"Name = "<<name <<endl;
        cout<<"Address = "<<address <<endl;
        cout<<"Age = "<<age <<endl;
    }
};
class student : public person
{
private:
    int reg_no;
    string course;
public:
    student()
    {
        reg_no=0;
        course="";
    }
    void getstudent()
    {
        person::getperson();
        cout<<"Enter registration no : ";
        cin>>reg_no;
        cout<<"Enter course : ";
        cin>>course;
    }
    void displaystudent()
    {
        person::displayperson();
        cout<<"Registration no. = "<<reg_no<<endl;
        cout<<"Course = "<<course<<endl;
    }
};
class employee : public person
{
private:
    int emp_id;
    float salary;
public:
    employee()
    {
        emp_id=0;
        salary=0;
    }
    void getemployee()
    {
        person::getperson();
        cout<<"Enter employee id : ";
        cin>>emp_id;
        cout<<"Enter salary : ";
        cin>>salary;
    }
    void displayemployee()
    {
          person::displayperson();
          cout<<"Employee id = "<<emp_id<<endl;
          cout<<"Salary = "<<salary<<endl;
    }


};
class teacher : public employee
{
private:
    int teacher_id;
    string department;
public:
    teacher()
    {
        teacher_id=0;
        department="";
    }
    void getteacher()
    {
        getemployee();
        cout<<"Enter teacher ID : ";
        cin>>teacher_id;
        cout<<"Enter Department : ";
        cin>>department;

    }
    void displayteacher()
    {
        displayemployee();
        cout<<"Teacher ID = "<<teacher_id<<endl;
        cout<<"Department = "<<department<<endl;
    }
};
int main()
{

    student s;
    employee e;
    teacher t;
    while(1)
    {
        system("cls");
    int choice;
    cout<<"1. Enter Student Details \n2. Enter Employee Details \n3. Enter Teacher Details \n";
    cout<<"4. Display student \n5. Display employee\n6. Display teacher\n7. EXIT\n\n";
    cout<<"6. EXIT";
    cout<<"\nEnter your choice : ";
    cin>>choice;


    switch(choice)
    {
    case 1:
        {
            s.getstudent();
             break;
        }

    case 2:
        {
            e.getemployee();
            break;
        }
    case 3:
        {
            t.getteacher();
            break;
        }
    case 4:
        {
            s.displaystudent();
            getch();
            break;
        }
    case 5:
        {
            e.displayemployee();
            getch();
            break;
        }
    case 6:
        {
           t.displayteacher();
           getch();
           break;
        }
    case 7:
        {
           break;
        }
    default:
        {
            cout<<"Wrong choice \n\n";
        break;
        }
    }

    }

}

