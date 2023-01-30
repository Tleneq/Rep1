#include <iostream>
using namespace std;
//funkcja dodająca dwie liczby typu double
int dodawanie(){
    double a,b;
    cout<<"Wpisz dwie liczby do dodania: ";
    cin>>a>>b;
    a +=b;
    cout<<"Suma liczb wynosi:" <<a;
    return 0;
}
