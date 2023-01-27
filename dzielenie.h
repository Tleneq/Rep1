#include <iostream>
using namespace std;
long double dzielenie(long double a, long double b){
    return a/b;
}
int main(int argc, char* argv[]){
    long double a,b;
    cout<<"Wpisz dwie liczby do podzielenia: ";
    cin>>a>>b;
    if(!b) cout<<"Pamiętaj *******, nie dziel przez zero!";
    else cout<<"Wynik: "<<dzielenie(a,b);
    return 0;
}
