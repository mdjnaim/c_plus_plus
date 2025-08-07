#include<iostream>
#include<conio.h>
using namespace std;
void Summation(int x,int y)
{
    int sum=x+y;
    cout<<"Summation using function = "<<sum<<endl;
}
void Subtraction(int x,int y)
{
    int sub=x-y;
    cout<<"Subtraction using function = "<<sub<<endl;
}
void Multiplication(int x,int y)
{
    int mul=x*y;
    cout<<"Multiplication using function = "<<mul<<endl;
}
void Division(int x,int y)
{
    float div;
    div=(float)x/y;
    cout<<"Division using function = "<<div<<endl;
}

int main()
{
    Summation(5,9);
    Subtraction(9,4);
    Multiplication(9,10);
    Division(90,5);

    Summation(4,8);
    Subtraction(9,5);
    Multiplication(5,10);
    Division(90,10);

    Summation(5,5);
    Subtraction(7,4);
    Multiplication(9,5);
    Division(5,2);

    getch();
}

