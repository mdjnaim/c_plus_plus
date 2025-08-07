#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double cgpa;
    void display()
    {
        cout<<"ID : "<<id<<" "<<"CGPA : "<<cgpa<<endl;
    }
    student(int x,double y)
    {
        id=x;
        cgpa=y;
    }
};
int main()
{
    student Naim(458,3.89);
    Naim.display();

    student Fahim(459,3.90);
    Fahim.display();


    getch();
}
