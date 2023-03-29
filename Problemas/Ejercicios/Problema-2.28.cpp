#include <iostream>
using namespace std;

int main() {
  int numero, num1, num2, num3, num4;

  cout << "Introduce un número de 4 cifras: ";
  cin >> numero;//9514

  num1 = numero / 1000;
  num2 = (numero / 100) % 10;
  num3 = (numero / 10) % 10;
  num4 = numero % 10;

  cout << "Número invertido: " << num4 << num3 << num2 << num1 << endl;

  return 0;
}