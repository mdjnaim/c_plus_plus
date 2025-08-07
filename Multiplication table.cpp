#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int num,i;
   cout<<"Enter a Integer : ";
   cin>>num;
   for(i=1;i<=10;i++)
   {
       cout<<num<<"X"<<i<<"="<<i*num<<endl;
   }

    getch();
}


