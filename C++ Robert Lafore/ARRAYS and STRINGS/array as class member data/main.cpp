#include <iostream>

using namespace std;
class student
{
    private:
        int id;
        char name[20];
        int sub[6];
    public:
        void getDetail();
        void result();

};
void student::getDetail()
{
    cout<<"Enter ID : ";
    cin>>id;
    cout<<"Enter Student name : ";
    cin>>name;
    cout<<"Enter marks in 5 subjects : ";
    for(int i=0;i<5;i++)
    {
      cin>>sub[i];
    }
}
void student::result()
{
    float total = 0;
    for(int i=0;i<5;i++)
    {
        total+=sub[i];
    }
    cout<<"Total marks = "<<total;
}
int main()
{
    student s;
    s.getDetail();
    s.result();
}
