#include <iostream>
#include <math.h>
using namespace std;
int t,n;
int x [1000], y[1000];
string name [1000];
double wskaznik[1000];

bool containsOnlyLetters(std::string const &name);

int main()
{
   // cout<<"Podaj liczbe testow: ";
    cin>>t;
    if ((t>0)&&(t<=100)) {
            for (int i=0;i<t;i++) {
    //cout<<"Podaj n: ";
    cin>>n;




for (int i=0;i<n;i++) {



        cin>>name[i]>>x[i]>>y[i];
        if ((containsOnlyLetters(name[i])==true)&&(name[i].length()>0)&&(name[i].length()<=10)&&(x[i]>=-1000)&&(x[i]<=1000)&&(y[i]>=-1000)&&(y[i]<=1000)) {

     wskaznik[i]=pow(x[i],2)+pow(y[i],2);
     } else {
      return 0;}

     } /*
for (int j=0;j<n;j++) {
        cout<<name[j]<<" "<<x[j]<<" "<<" "<<y[j]<<" "<<wskaznik[j];
     cout<<endl;
}
cout<<endl; */

string temp0;
double temp1,temp2,temp3;

 for( int k = 0; k < n-1; k++ )
    {
        for (int l=k+1;l<n;l++) {

            if( wskaznik [k]> wskaznik[l] ) {

                    temp0 =name[k];
                    temp1 = x[k];
                    temp2 = y[k];
                    temp3 = wskaznik[k];

                    name[k] = name[l];
                    x[k] = x[l];
                    y[k]= y[l];
                    wskaznik[k]= wskaznik[l];

                    name[l] = temp0;
                    x[l]= temp1;
                    y[l]=temp2;
                    wskaznik[l]=temp3;
}

        }

    }



for (int l=0;l<n;l++) {
        cout<<name[l]<<" "<<x[l]<<" "<<y[l];
     cout<<endl;
}
cout<<endl;


 } }


    return 0;
}


bool containsOnlyLetters(std::string const &name) {
    return name.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") ==
        std::string::npos;
}

