#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    while(1)
    {
        int guessnum,randomnum;
        cout<<"Enter your guess number between 1 to 10 : ";
        cin>>guessnum;
         randomnum=1+rand()%10;
         if(randomnum==guessnum)
         {
             cout<<"You are win."<<endl;
         }
         else
            {
             cout<<"You are lost. Try again."<<endl;
             cout<<"Your random number is : "<<randomnum<<endl;
            }
    }
    getch();
}
