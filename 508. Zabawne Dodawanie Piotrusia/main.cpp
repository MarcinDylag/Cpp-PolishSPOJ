#include <iostream>

using namespace std;
int t;
int liczba;
int odwroc_liczbe (int liczba);
int palindrom (int liczba);
int main()
{
//cout<<"Podaj ilosc testow: "<<endl;
cin>>t;
if ((t>=0)&&(t<=80)) {
    for (int i=0;i<t;i++) {
if ((liczba>=0)&&(liczba<=80)) {
//cout<<"Podaj n: "<<endl;
cin>>liczba;
if ((liczba>=0)&&(liczba<=80)) {
palindrom(liczba);
} else
break;
}
}
}
    return 0;
}

//test palindromu
int palindrom (int liczba) {
int k;
int x;
string wyraz;
if (liczba!=odwroc_liczbe(liczba)) {
for (int i=0; i<1000000;i++) {
   x= liczba+odwroc_liczbe(liczba);
   liczba=x;
   if (liczba==odwroc_liczbe(liczba)) {
        k=i+1;
        x=liczba;
       break;}
    }
} else if (liczba==odwroc_liczbe(liczba)) {
    k=0;
        x=liczba;
}
   std::cout<<x<<" "<<k<<std::endl;
  return true;
}

//odwracanie wyrazu
int odwroc_liczbe (int liczba) {
string p;
std::string wyraz = std::to_string(liczba);
int d = wyraz.length();
int k = d;
  for (int i=0;i<=d;i++) {

    p[i]=wyraz[k-1];
 k--;
  }
  int y = std::stoi(p);
return y;
}
