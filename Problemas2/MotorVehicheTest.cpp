#include <iostream>
#include <string>
#include "MotorVehicle.h"

using namespace std;

int main()
{
	string marca, tipogas, color;
	int a�omanu, capacidad;

	cout << "�Que marca es tu carro?: ";
	cin >> marca;

	cout << endl << "�Que combustible usa tu carro?: ";
	cin >> tipogas;

	cout << endl << "�De que a�o es tu carro?: ";
	cin >> a�omanu;

	cout << endl << "�De que color es tu carro?: ";
	cin >> color;

	cout << endl << "�Cuantos caballos de fuerza tiene tu carro?: ";
	cin >> capacidad;

	MotorVehicle carro(marca, tipogas, a�omanu, color, capacidad);
	carro.displayCarDetail();
}