/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 27-06-2019
Roll No. 18600006*/
// Assignment on Inheritance

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cstring>
#include <string.h>
using namespace std;
int menu(void);
class bonus
{
    protected:
        float bonuss;
    public:
        bonus()
        {
            bonuss=0;
        }
        void getbonus()
        {
            cout<<"Enter bonus : ";
            cin>>bonuss;
        }
        void putbonus()
        {
            cout<<"Bonus = "<<bonuss<<endl;
        }

};
class specialization
{
    private:
        string subject;
        int experience;
    public:
        specialization()
        {
            subject="";
            experience=0;
        }
        void getspecialization()
        {
            cout<<"Enter Subject of specialization : ";
            cin>>subject;
            cout<<"Enter experience (years) : ";
            cin>>experience;
        }
        void putspecialization()
        {
            cout<<"Subject of specialization = "<<subject<<endl;
            cout<<"Experience ( year ) = "<<experience<<endl;
        }

};
class person
{
    private:
    string name;
    string address;
    public:
        person()
        {
            name="";
            address="";
        }


    class dob
    {
        private:
        int day,month,year,age;
        public:
            dob()
            {
                day=0;
                month=0;
                year=0;
                age=0;
            }
            void getdob()
            {
                cout<<"Enter DOB ( dd \\ mm \\ yyyy)";
                cin>>day>>month>>year;
                cout<<"Ente age : ";
                cin>>age;
            }
            void putdob()
            {
                cout<<"DOB = "<<day<<"-"<<month<<"-"<<year<<endl;
                cout<<"Age = "<<age<<endl;
            }
    }b;
    void getperson()
        {
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Address : ";
            cin>>address;
            person::b.getdob();
        }
        void putperson()
        {
            cout<<"Name = "<<name<<endl;
            cout<<"Address = "<<address<<endl;
            person::b.putdob();
        }

};
class student : public person
{
    private:
        string courseID;
        int regd_no,marks;
    public:
        student()
        {
            courseID = "";
            regd_no=0;
            marks=0;
        }
        void getstudent()
        {
            person::getperson();
            cout<<"Enter Registration No. : ";
            cin>>regd_no;
            cout<<"Enter Course ID : ";
            cin>>courseID;
            cout<<"Enter Marks : ";
            cin>>marks;
        }
        void putstudent()
        {
            person::putperson();
            cout<<"Registration No. = "<<regd_no<<endl;
            cout<<"Course ID = "<<courseID<<endl;
            cout<<"Marks = "<<marks<<endl;
        }

};
class employee : public person,public bonus
{
    private:
        string job_title;
        float basic_sal,gross_sal;
    public:
        employee()
        {
            job_title="";
            basic_sal=0;
            gross_sal=0;
        }
        void getemployee()
        {
            person::getperson();

            cout<<"Enter Job title : ";
            cin>>job_title;
            cout<<"Enter Basic Salary : ";
            cin>>basic_sal;

            bonus::getbonus();
        }
        void putemployee()
        {
            person::putperson();

            cout<<"Job title = "<<job_title<<endl;
            cout<<"Basic Salary = "<<basic_sal<<endl;


            bonus::putbonus();
            cout<<"Gross Salary = "<<(basic_sal+bonuss)<<endl;

        }

};

class teacher : public employee,public specialization
{
    public:
        void getteacher()
        {
           employee::getemployee();
           specialization::getspecialization();

        }
        void putteacher()
        {
            employee::putemployee();
            specialization::putspecialization();

        }


};
int main()
{
    employee emp;
    teacher teach;
    student stu;
    while(1)
    {
        system("cls");

    int choice;
    choice = menu();
    switch(choice)
    {
    case 1:
        {
            stu.getstudent();
            break;
        }

    case 2:
        {
            emp.getemployee();
            break;
        }

    case 3:
        {
           teach.getteacher();
            break;
        }

    case 4:
        {
             stu.putstudent();
            break;
        }

    case 5:
        {
            emp.putemployee();
            break;
        }

    case 6:
        {
          teach.putteacher();
            break;
        }

    case 7:
        {
             exit(0);
            break;
        }

    default:
        cout<<"Invalid choice ..... Try again \n\n\n\n";

    }
     getch();
    }

}


int menu()
{
    int choice;
    cout<<"***** MENU *****"<<endl;
    cout<<"1. Enter Student details "<<endl;
    cout<<"2. Enter Employee details "<<endl;
    cout<<"3. Enter Teacher details "<<endl;
    cout<<"\n***********************\n";
    cout<<"4. Show Student details"<<endl;
    cout<<"5. Show Employee details"<<endl;
    cout<<"6. Show Teacher details"<<endl;
    cout<<"7. EXIT"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    return choice;
}
