
//pow(1,5)+pow(2,5)+pow(3,5)+.....+pow(n,5)
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
   int sum=0,n,i;
   cout<<"Enter the last value of your series : ";
   cin>>n;
   for(i=0;i<=n;i++)
   {
       sum=sum+pow(i,5);
   }
   cout<<sum;

    getch();
}




