#include <iostream>
#include <string>

using namespace std;

class MotorVehicle
{
private:
	string make;
	string fuelType;
	int yearofmanu;
	string color;
	int engineCapacity;
public:
	MotorVehicle()
	{
		make = "";
		fuelType = "";
		yearofmanu = 0;
		color = "";
		engineCapacity = 0;
	}

	MotorVehicle(string make_, string fuelType_, int yearofmanu_, string color_, int engineCapacity_)
	{
		make = make_;
		fuelType = fuelType_;
		yearofmanu = yearofmanu_;
		color = color_;
		engineCapacity = engineCapacity_;
	}

	void setmake(string make_)
	{
		make = make_;
	}

	void setfuelType(string fuelType_)
	{
		fuelType = fuelType_;
	}

	void setyearofmanu(int yearofmanu_)
	{
		yearofmanu = yearofmanu_;
	}

	void setcolor(string color_)
	{
		color = color_;
	}

	void setengineCapacity(int engineCapacity_)
	{
		engineCapacity = engineCapacity_;
	}

	string getmake()
	{
		return make;
	}

	string getfuelType()
	{
		return fuelType;
	}

	int getyearofmanu()
	{
		return yearofmanu;
	}

	string getcolor()
	{
		return color;
	}

	int getengineCapacity()
	{
		return engineCapacity;
	}

	void displayCarDetail()
	{
		cout << endl << endl << "Detalles de tu carro" << endl;
		cout << "La marca es: " << getmake() << endl;
		cout << "El tipo de gasolina es: " << getfuelType() << endl;
		cout << "El alo de manufactura es: " << getyearofmanu() << endl;
		cout << "El color es: " << getcolor() << endl;
		cout << "La cantidad de caballos de fuerza es: " << getengineCapacity() << endl;
	}
};