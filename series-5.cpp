
//pow(1,2)+pow(2,2)+pow(3,2)+.....+pow(n,2)
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
       sum=sum+i*i;
   }
   cout<<sum;

    getch();
}



