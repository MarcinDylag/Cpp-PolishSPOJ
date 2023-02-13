#include <iostream>

using namespace std;
int a;
int b;
int n;
int x, r, p, j;
int y;


int main()
{
    //cout<<"Podaj liczbe cykli: "<<endl;
    cin>>n;

    if((n>=1)&&(n<=10)) {

        for (int k=1; k<=n; k++) {
   //cout<<"Podaj a i b"<<endl;
    cin>>a>>b;

if ((a>=1)&&(a<=1000000000)&&(b>=1)&&(b<=1000000000)) {

    r=b%4;
    if (r==0)
        p=4;

    else
        p=r;

    x=a%10;
    y=1;
    for (int i=1;i<=p;i++) {
        y=y*x;
    }

    j=y%10;
   // cout<<"Y = "<<y<<endl;
   // cout<<"Ostatnia cyfra: "<<endl;
    cout<<j<<endl;
}
else
    break;
}



    }
    else

    return 0;
}
