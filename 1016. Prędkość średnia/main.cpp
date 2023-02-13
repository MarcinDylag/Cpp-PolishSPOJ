#include <iostream>

using namespace std;
int t, a, b;
int x;
int main()
{
    cin>>t;
1<t<1000;
1<a<10000;
1<b<10000;

for (int i=1; i<=t;i++) {
cin >> a >> b;
x=2*a*b/(a+b);
cout <<2*a*b/(a+b)<< endl;
}


    return 0;
}
