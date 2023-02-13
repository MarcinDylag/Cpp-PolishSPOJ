#include <iostream>

using namespace std;
int nwd (int a, int b);
int nww (int a, int b);

int main()
{
    int a,b,t;

   // cout<<"Podaj liczbe testow: ";
    cin>>t;
    if ((t>=1)&&(t<=20)) {
        for (int i=0;i<t;i++) {

    //cout << "Podaj a i b: " << endl;
    cin>>a>>b;

    if ((a>=10)&&(a<=30)&&(b>=10)&&(b<=30)) {

   nwd(a,b);


   // cout<<"NWD: "<<nwd(a,b)<<endl;
   // cout<<"NWW: "<<endl;
    cout<<nww(a,b)<<endl;
    }}}

    return 0;
}

int nwd (int a, int b) {
    int x,r;

       while (b!=0) {
        r=a%b;
        a=b;
        b=r;
    }

    x=a;

    return x;
}

int nww (int a, int b) {
int y;
y=a*b/nwd(a,b);
return y;
}
