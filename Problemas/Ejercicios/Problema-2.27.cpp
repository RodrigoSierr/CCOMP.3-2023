#include <iostream>
using namespace std;

int main () {
    char car;
    cout << "Coloque su caracter: "<< endl;
    cin >> car;

    cout << static_cast<int>(car);
    
    return 0;
}   