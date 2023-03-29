#include <iostream>
using namespace std;

int main () {
    char car;
    cout << "Coloque su caracter: ";
    cin >> car;

    cout << static_cast<int>(car);
    
    return 0;
}   