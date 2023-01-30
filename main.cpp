#include "dodawanie.h"
#include "dzielenie.h"
#include "mnozenie.h"
#include "odejmowanie.h"
#include <iostream>

using namespace std;

int main() {
  cout << "----------------------------------" << endl;
  cout << "Wybierz jedną z opcji kalkulatora:" << endl;
  cout << "----------------------------------" << endl;
  cout << "1 - Dodawanie" << endl;
  cout << "2 - Odejmowanie" << endl;
  cout << "3 - Dzielenie" << endl;
  cout << "4 - Mnozenie" << endl;

  bool loop = true;
  while (true) {
    int op;
    cout << endl;
    cin >> op;

    switch (op) {
    case 1: {
      dodawanie();
      cout << endl;
      cout << endl;
      cout << "Podaj kolejną instrukcję!" << endl;
      break;
    }
    case 2: {
      odejmowanie();
      cout << "Podaj kolejną instrukcję!" << endl;
      break;
    }
    case 3: {
      dzielenie();
      cout << endl;
      cout << endl;
      cout << "Podaj kolejną instrukcję!" << endl;
      break;
    }
    case 4: {
      mnozenie();
      cout << endl;
      cout << endl;
      cout << "Podaj kolejną instrukcję!" << endl;
      break;
    }
    default: {
      cout << "Niepoprawny operator!" << endl;
      break;
    }
      return 0;
    }
  }
}