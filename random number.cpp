#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    for (int i=1;i<=10;i++)
    {
       int randomnum=rand()%15;
        cout<<"Random number = "<<randomnum<<endl;
    }
    getch();
}
