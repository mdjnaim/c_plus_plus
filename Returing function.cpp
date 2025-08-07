#include<iostream>
#include<conio.h>
using namespace std;
int Summation(int x,int y);
int Subtraction(int x,int y);
int Multiplication(int x,int y);
float Division(int x,int y);


int main()
{
    Summation(5,5);
    Subtraction(7,4);
    Multiplication(9,5);
    Division(5,2);

    getch();
}
int Summation(int x,int y)
{
    int sum=x+y;
    cout<<"Summation using function = "<<sum<<endl;
    return sum;
}
int Subtraction(int x,int y)
{
    int sub=x-y;
    cout<<"Subtraction using function = "<<sub<<endl;
    return sub;
}
int Multiplication(int x,int y)
{
    int mul=x*y;
    cout<<"Multiplication using function = "<<mul<<endl;
    return mul;
}
float Division(int x,int y)
{
    float div;
    div=(float)x/y;
    cout<<"Division using function = "<<div<<endl;
    return div;
}
