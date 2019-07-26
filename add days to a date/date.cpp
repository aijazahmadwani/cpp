#include<iostream>
#include<cmath>
#include <ctime>
#include<conio.h>
#include <stdlib.h>
// program to add days to current date
using namespace std;
# define add_days 15
int day,month,year; // for output
int leap_year(void);
int main()
{

    system("cls");

    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    cout << " \t\t\tCurrent Date: " <<(tPtr->tm_mday)<<"-"<< (tPtr->tm_mon)+1 <<"-"<< (tPtr->tm_year)+1900<< endl;
    cout << " \t\t\tCurrent Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
    day = tPtr->tm_mday;
    month = (tPtr->tm_mon)+1;
    year = (tPtr->tm_year)+1900;

    day=day+add_days; // current day + 15

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        if(day>31)
        {
            day = day-31;
            if(month==12)
            {
                month=1;
                year++;
            }
            else
                month++;
        }

    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        if(day>30)
        {
            day = day-30;
            month++;
        }

    }
    else if(month==2)
    {
        if(leap_year())
        {
            if(day>29)
            {
                day=day-29;
                month++;
            }
        }
        else
        {
            if(day>28)
            {
                day = day-28;
                month++;
            }
        }


    }
    cout<<"New Date = "<<day<<"-"<<month<<"-"<<year;


}

int leap_year()
    {
        if((year%100==0)&&(year%400==0))
        {
            return 1;
        }

        else if(year%4==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }
