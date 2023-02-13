#include <iostream>
#include <iomanip>

using namespace std;
double pole (float r, float d);

int main()
{
float r,d;

   // cout << "Podaj r i d: " << endl;
    cin>>r>>d;

    if ((2*r>=1)&&(2*r<=2000)&&(d>=1)&&(d<=2000)) {

  //  cout<<"Szukane pole: "<<endl;

    //cout<<pole(r,d)<<endl;
  std::cout.precision( 2 );
    std::cout << std::fixed;
std::cout <<pole(r,d)<<endl;

    }

    return 0;
}


double pole (float r, float d) {
double pi = 3.141592654;
double p;
double pole=(double)(pi*(r*r-(d*d/4)));


return pole;
}
