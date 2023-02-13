#include <iostream>

using namespace std;
int t,n,x;
int tab[100];

int main()
{
    //cout<<"Podaj liczbe testow: ";
    cin>>t;

    if ((t>=0)&&(t<=100)) {

    for (int i=0;i<t;i++) {

   // cout<<"Podaj n: ";
    cin>>n;

    for (int j=0; j<n; j++) {
       //cout<<endl<<"Podaj x: ";
        cin>>x;
        tab[j]=x;

    }
    for (int k=n-1; k>=0; k--) {

        cout<<tab[k]<<" ";
    }
    cout<<endl;
    }
    }

    return 0;
}
