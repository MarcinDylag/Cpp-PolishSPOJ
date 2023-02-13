#include <iostream>

using namespace std;
int nwd (int a, int b);

int main()
{
int t, a, b;
//cout<<"Podaj liczbe cykli: ";
cin>>t;
for (int i=0; i<t; i++) {
//cout << "Podaj a i b: ";
cin>>a>>b;
if ((a>=0)&&(a<=1000000)&&(b>=0)&&(b<=1000000))
    {
//  cout <<"NWD: ";
    cout<<nwd (a, b)<<endl;
    }
    else {
        break;
    }
    }

return 0;
}

int nwd (int a, int b) {
int  r;

while (b!=0) {
    r=a%b;
    a=b;
    b=r;
 }
return a;
}
