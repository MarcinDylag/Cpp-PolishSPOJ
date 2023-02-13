#include <iostream>

using namespace std;
char znak;
int stos[10];
int rozmiar;
void push();
void pop();

int main()
{
rozmiar=0;

   // cout<<"Jakie dzialanie wykonac? (+/-)"<<endl;
    while (cin>>znak)
    {
        if (znak=='+')
        {
            push();
        }
        if (znak=='-')
        {
            pop();
        }
    }

    return 0;
}

// -------| "+" -  dodawanie elementu na stos  |-----------------------------------
void push()
{
    if (rozmiar>=10)
    {
        cout<<":("<<endl;
    }
    else
    {
        rozmiar=rozmiar+1;
        cin>>stos[rozmiar];

        cout<<":)"<<endl;
    }
}

// -------| "i" -  odejmowanie elementu ze stosu  |-----------------------------------
void pop()
{
    if (rozmiar==0)
    {
        cout<<":("<<endl;
    }
    else
    {
        cout<<stos[rozmiar]<<endl;
        rozmiar=rozmiar-1;
    }

}
