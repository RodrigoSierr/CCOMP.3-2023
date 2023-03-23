#include <iostream>

using namespace std;

int main(){
    int pi = 3.14159; 
    int radio, diametro, perimetro, area;
    
    cout << "ingrese un numero: "<< endl;
    cin >> radio;

    radio = 2*pi;
    diametro = 2*radio;
    perimetro = 2*pi*radio;
    area = pi*(radio*radio);

    cout << "El radio es: " << radio <<endl;
    cout << "El diametro es: " << diametro <<endl;
    cout << "El perimetro es: " << perimetro <<endl;
    cout << "El area es: " << area<< endl;

return 0;





}