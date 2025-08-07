
//1+3+5+.....+n
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int sum=0,n,i;
   cout<<"Enter the last value of your series : ";
   cin>>n;
   for(i=1;i<=n;i+=2)
   {
       sum=sum+i;
   }
   cout<<sum;

    getch();
}



