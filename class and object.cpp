#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    char name[50];
    char number[12];
    char address[20];
};
int main()
{
    student Naim, Fahim,Raj;

    Naim.name[50] = 'Naim';
    Naim.number[12] = 01777543216;
    Naim.address[20] = 'Narail';

    cout<<"Name : "<<Naim.name[50]<<endl;
    cout<<"Number : "<<Naim.number[12]<<endl;
    cout<<"Address : "<<Naim.address[20]<<endl;

    Fahim.name[50] = 'Fahim';
    Fahim.number[12] = 01734566123;
    Fahim.address[20] = 'Mirpur';

    cout<<"Name : "<<Fahim.name[50]<<endl;
    cout<<"Number : "<<Fahim.number[12]<<endl;
    cout<<"Address : "<<Fahim.address[20]<<endl;

    Raj.name[50] = 'Raj';
    Raj.number[12] = 01645571254;
    Raj.address[20] = 'Gulsan';

    cout<<"Name : "<<Raj.name[50]<<endl;
    cout<<"Number : "<<Raj.number[12]<<endl;
    cout<<"Address : "<<Raj.address[20]<<endl;

    getch();

}
