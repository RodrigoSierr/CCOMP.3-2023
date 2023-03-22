#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "ingrese su edad" << endl;
    cin >> a;

    if (a<18){
    cout << " usted es menor de edad" << endl;
    }
    if (a>=18){
        cout << "usted es mayor de edad" << endl;
    }
 return 0;
}