#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int marks[10],i;
   for(i=0;i<=10;i++)
   {
       cout<<"Marks for student no "<<i+1<<" = ";
       cin>>marks[i];
   }
   cout<<"Marks are : ";
   for(i=0;i<=10;i++)
   {
       cout<<marks[i]<<" ";
   }
    getch();
}





