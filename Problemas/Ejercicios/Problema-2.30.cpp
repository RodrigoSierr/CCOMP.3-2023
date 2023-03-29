#include <iostream>
using namespace std;

int main() {

    float peso, altura;

    cout << "Introduzca su Peso: ";
    cin >> peso ;
    cout << "Introduzca su Altura: ";
    cin >> altura;

    float imc = peso / (altura * altura);

    cout << "Tu imc es: " << imc << endl;

    cout << "BMI VALUES"<< endl;
    cout << "Underweight: " << "Less than 18.5"<< endl;
    cout << "Normal: " << " Between 18.5 and 24.9" << endl;
    cout << "Overweight: " << "Between 25 and 29.9" << endl;
    cout << "Obese: " << "30 or greater "<< endl;

    return 0;
}