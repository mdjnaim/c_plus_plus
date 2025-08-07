
//1.5+2.5+3.5+.....+n
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   float sum=0,n,i;
   cout<<"Enter the last value of your series : ";
   cin>>n;
   for(i=1.5;i<=n;i++)
   {
       sum=sum+i;
   }
   cout<<sum;

    getch();
}



