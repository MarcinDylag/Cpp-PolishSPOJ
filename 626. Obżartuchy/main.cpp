#include <iostream>

using namespace std;

int n,m,t,c,x;
int w;

int main()
{
//cout << "Podaj liczbe testow: " << endl;
cin>>t;

if (t>0) {
for (int i=0;i<t;i++) {
w=0;


   // cout << "Podaj n i m: " << endl;

    cin>>n>>m;
    if ((n>0)&&(n<=10000)&&(m>0)&&(m<=1000000000)) {
    for (int j=0;j<n;j++) {
        //cout<<j+1<<". Podaj czas: ";
        cin>>c;
        if ((c>0)&&(c<=100000)) {
        w+=24*3600/c;
       // cout<<"Liczba: "<<w<<endl;
       }
        else {
            return 0; }

    }





   if (w%m==0) {
        x=w/m;
    }
    else  {
        x=w/m+1;
    }
//cout<<"Suma ciastek: "<<w<<endl;
//cout<<"Wynik: ";
cout<<x<<endl;

}}}

    return 0;
}
