#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
    double a,b;
    cout<<"Wpisz dwie liczby do podzielenia: ";
    cin>>a>>b;
    if(b) cout<<a<<" / "<<b<<" = "<<a/b;
    else cout<<"Pamiętaj *******, nie dziel przez zero!";
    return 0;
}