#include <iostream>
using namespace std;

int main() {

  int angka;

  cout << "masukan angka :";
  cin >> angka;

  if ((angka%2) == 0)
    cout << "genap" << endl;
  else
    cout << "ganjil" << endl;

  return 0;
} 