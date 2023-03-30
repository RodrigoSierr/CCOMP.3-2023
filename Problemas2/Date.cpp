#include <iostream>
using namespace std;

class Fecha {
private:
    int dia, mes, anio;

public:
    Fecha(int d, int m, int a) {
        dia = d;
        mes = (m >= 1 && m <= 12) ? m : 1;
        anio = a;
    }

    void setDia(int d) {
        dia = d;
    }

    void setMes(int m) {
        mes = (m >= 1 && m <= 12) ? m : 1;
    }

    void setAnio(int a) {
        anio = a;
    }

    int getDia() {
        return dia;
    }

    int getMes() {
        return mes;
    }

    int getAnio() {
        return anio;
    }

    void displayDate() {
        cout << dia << "/" << mes << "/" << anio << endl;
    }
};

int main() {
    Fecha fecha1(29, 3, 2023);
    fecha1.displayDate();

    fecha1.setDia(30);
    fecha1.setMes(4);
    fecha1.setAnio(2024);
    fecha1.displayDate();

    cout << "Dia: " << fecha1.getDia() << endl;
    cout << "Mes: " << fecha1.getMes() << endl;
    cout << "Anio: " << fecha1.getAnio() << endl;

    return 0;
}