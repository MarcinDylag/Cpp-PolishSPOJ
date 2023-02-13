#include <iostream>

using namespace std;
int t, n, l, suma;
int main()
{
   // cout << "Podaj liczbe testow: " << endl;
    cin>>t;
    if (0<t<100) {

        for (int i=1; i<=t; i++) {
     //   cout<<"Podaj ilosc liczb do zsumowania: "<<endl;
        cin>>n;
        if (n>=0) {
       // cout<<"Podaj te liczby: "<<endl;
        suma=0;
        for (int j=1; j<=n; j++) {

            cin>>l;
            suma+=l;
        }

      //  cout<<"Suma liczb wynosi: "<<endl;
        cout<<suma<<endl;
    }
    else
        break;
    }
    }

    return 0;
}
