#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int col,row,n;
   cout<<"Enter the number of your line : ";
   cin>>n;
   for(row=0;row<=n;row++)
   {
       for(col=0;col<=row;col++)
       {
           cout<<" "<<col;
       }
       cout<<endl;
   }
    getch();
}




