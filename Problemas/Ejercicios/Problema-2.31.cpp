#include <iostream>
using namespace std;

int main(){
    double millas, costo_galon, millas_galon, peajes, tarifa_estacinamiento;
    double costo_diario;

    cout <<"Total miles driven per day: "<< endl;
    cin >> millas;
    cout <<"Cost per gallon of gasoline: "<< endl;
    cin >> costo_galon;
    cout <<"Average miles per gallon: "<<endl;
    cin >> millas_galon;
    cout <<"Parkin fees per day: "<<endl;
    cin >> peajes;
    cout <<"Tolls per day: "<<endl;
    cin >> tarifa_estacinamiento;

    costo_diario = (millas / millas_galon) * costo_galon + tarifa_estacinamiento + peajes;

    cout << "El costo diario es: " << costo_diario;
    return 0;
}