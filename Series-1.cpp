
//1+2+3+.....+n
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int sum=0,n,i;
   cout<<"Enter the last value of your series : ";
   cin>>n;
   for(i=0;i<=n;i++)
   {
       sum=sum+i;
   }
   cout<<sum;

    getch();
}


