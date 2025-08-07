#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{

    float num1,num2;

    cout<<showpoint;
    //cout<<noshowpoint;

    cout<<fixed;
    cout<<setprecision(4);

    cout<<"Enter 2 number : ";
    cin>>num1>>num2;

    float sum=num1+num2;
    cout<<setw(25)<<"Sum is = "<<sum<<endl;

    float sub=num1-num2;
    cout<<setw(25)<<"Subtraction is = "<<sub<<endl;

    float mul=num1*num2;
    cout<<setw(25)<<"Multiplication is = "<<mul<<endl;

    float div=num1/num2;
    cout<<setw(25)<<"Division is = "<<div<<endl;

    //int rem=num1%num2;
    //cout<<"Remainder is = "<<rem<<endl;

    getch();

}
