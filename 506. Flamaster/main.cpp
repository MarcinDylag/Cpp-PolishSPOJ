#include <iostream>

using namespace std;

int powtorzenia (string wyraz);

int main()
{
int t;
//cout<<"Podaj ilosc testow: ";
cin>>t;

if ((t>=1)&&(t<=50)) {
        for (int i=0;i<t;i++) {
string wyraz;
   // cout << "Podaj wyraz:" << endl;
    cin>>wyraz;
    powtorzenia (wyraz);
} }

    return 0;
}

//powtórzenia
int powtorzenia (string wyraz) {

int dlugosc = wyraz.length();

if (dlugosc<=200) {

//cout<<"D="<<dlugosc<<endl;

int x=1;

for (int i=0; i<dlugosc; i++) {


    if (wyraz[i]==wyraz[i+1]) {
        x++; }
    if ((wyraz[i]!=wyraz[i+1])&&(x<=2)) {
        x=1;
    }
   if ((wyraz[i]!=wyraz[i+1])&&(x>2)) {


std::string w = std::to_string(x);
wyraz.replace((i-x+2),x-1, w);

int d = wyraz.length();
x=1; i=0; dlugosc=d;
    }

}
}

 std::cout<<wyraz<<std::endl;
  return true;
}
