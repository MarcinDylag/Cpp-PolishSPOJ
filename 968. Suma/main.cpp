#include <iostream>

int x;
int y=0;

using namespace std;

int main()
{
    while ((std::cin >> x )&&(x>=-100)&&(x<=100)){ // - (std::cin >> x ) - b�dzie wykonywa�o, p�ki b�d� wprowadzane dane, elo
    //cout << "Podaj x; " << endl;

    y+=x;

   // cout<<"Wynik: ";
    cout<<y<<endl;

    }


    return 0;
}
