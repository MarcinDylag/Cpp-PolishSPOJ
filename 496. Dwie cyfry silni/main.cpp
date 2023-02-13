#include <iostream>

using namespace std;
int n, x, silnia, d, j;

int main()
{
    //cout << "Podaj liczbe cykli: ";
    cin>>x;

    if ((x>=1)&&(x<=30)) {
        for (int i=1; i<=x; i++) {

   // cout << "Podaj liczbe: ";
    cin>>n;

    if ((n>=0)&&(n<=1000000000)){



if ((n==0)||(n==1)) {
    silnia=1;
    d=(silnia/10)%10;
    j=silnia%10;
}

if ((n>1)&&(n<=9)) {
silnia=1;
    for (int k=2; k<=n; k++)
        {

        silnia*=k;
}
    d=(silnia/10)%10;
    j=silnia%10;
}
   // cout << "Silnia: " <<silnia<<endl;
if ((n>9)&&(n<=1000000000)) {
    silnia=0;
    d=0;
    j=0;
}

  //  cout<<"Wynik1 i wynik2: "<<endl;
    cout<<d<<" "<<j<<endl;
}
else
    break;
    }
    }
    else
    return 0;
}
