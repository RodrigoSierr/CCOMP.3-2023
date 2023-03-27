#include <iostream>

using namespace std;

int main()
{   
    int a;
    int b;
    
    cout << "ingrese sus números: ";
    cin >> a >> b;
     
    int suma = a + b;

    if (2%suma == 0)
    {
        cout << "Su número es par"<<suma<< endl;
    }
        else 
        cout << "Su número es impar: " << suma << endl;

    return 0;
}
