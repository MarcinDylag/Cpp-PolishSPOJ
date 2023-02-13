#include <iostream>

using namespace std;
int n;
int x, r;
int main()
{
n<100000;
   1<x<10000;
cin>>n;
for (int i=0;i<n;i++) {
    cin>>x;

if (x==1){
    cout<<"NIE"<<endl;
}

if (x==2){
    cout<<"TAK"<<endl;
}

if (x>2) {
   for (int j=2;j<x;j++) {
    r=x%j;
        if (r==0) {
            cout<<"NIE"<<endl;
        break; }
   }
   if (r!=0)
   cout<<"TAK"<<endl; }


}

    return 0;
}
