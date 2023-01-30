#include <iostream>
using namespace std;

int odejmowanie() {
  double a, b;
  int wynik;
  cout << "Wypisz dwie liczby do odejmowania:" << endl;
  cin >> a;
  cin >> b;
  cout << "Wynik odejmowania: " << a - b << endl;
  wynik = a - b;
  return wynik;
}