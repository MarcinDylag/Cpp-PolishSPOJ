#include <iostream>
#include <cstring>

using namespace std;
string merge (char* x, char* y);

int main()
{
int t;
string a, b;
char* x;
char* y;

//cout << "Podaj liczbe testow: ";

cin>>t;

if (t>0) {
        for (int i=0;i<t;i++) {

string wyraz = "";
int dlugosc;
   // cout << "Podaj wyrazenie a i b:" << endl;
    cin>>a>>b;
   // cout<<"A: "<<a<<endl;
   // cout<<"B: "<<b<<endl;
    x = &a[0];
    y = &b[0];

   // cout<<"Wynik: ";
    cout<<merge(x,y)<<endl;
}
}


    return 0;
}


string merge (char* x, char* y) {
string wynik = "";

while ((*x!=0)&&(* y!=0))
       {
           wynik+= *x;
           wynik+= *y;
           x++; y++;
       }
       return wynik;
}


