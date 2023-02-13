#include <iostream>
#include <math.h>

using namespace std;
double a,b,c, delta;
int t;

int main()
{


    while ((cin>>a>>b>>c)&&(a!=0)) {

    //cout << "Podaj A, B i C: ";


    delta = b*b-4*a*c;
//cout<<"Delta wynosi: "<<delta<<endl;


    if (delta>0) {


        cout<<2<<endl;
    }
    if (delta==0) {



        cout<<1<<endl;
    }
    else if (delta<0) {
        cout<<0<<endl;
    }


}

    return 0;
}
