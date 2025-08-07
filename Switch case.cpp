#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a letter : ";
    cin>>c;
    c=tolower(c);
    switch(c)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
        cout<<"Vowel";
        break;
       default:
            cout<<"Consonant";
    }
    getch();
}
