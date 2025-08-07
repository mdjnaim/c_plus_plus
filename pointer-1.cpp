#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=6;
    int *p;
    p=&x;
    cout<<x<<endl;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;

    cout<<endl;
    cout<<endl;

    //Summation using pointer

    int num1=5,num2=8,sum,sub,mul;
    int *p1,*p2;
    p1=&num1;
    p2=&num2;

    sum=*p1+*p2;
    cout<<"Summation using pointer : "<<sum<<endl;

    cout<<endl;
    cout<<endl;

    /*Subtraction using pointer*/

    sub=*p1-*p2;
    cout<<"Subtraction using pointer : "<<sub<<endl;

    cout<<endl;
    cout<<endl;

     /*Multiplication using pointer*/

    mul=*p1**p2;
    cout<<"Multiplication using pointer : "<<mul<<endl;

    cout<<endl;
    cout<<endl;

    /*Division using pointer*/

    float div;
    div=(float)(*p1)/(*p2);
    cout<<"Division using pointer : "<<div<<endl;

    getch();
}

