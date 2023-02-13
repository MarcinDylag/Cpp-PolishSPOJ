#include <iostream>
#include <string>

bool containsOnlyLetters(std::string const &nazw);
using namespace std;

int main()
{
int n;
cout<<"Podaj n: ";
cin>>n;
string *nazw=new string [n];
   for (int i=0;i<n;i++) {

   cout<<"Podaj nazwe: "<<endl;
cin>>nazw[i];

if (containsOnlyLetters(nazw[i])==true) {
    cout <<"True"<<endl;

} else
cout<<"False"<<endl;
}
    return 0;
}


bool containsOnlyLetters(std::string const &nazw) {
    return nazw.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") ==
        std::string::npos;
}
