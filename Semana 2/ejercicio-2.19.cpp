#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Input three different integers: ";
    cin >> num1 >> num2 >> num3;

    int sum, prod, mayor, menor, prom;

    sum = num1 + num2 + num3;
    prod = num1 * num2 * num3;
    prom = num1 + num2 + num3 / 3;

    cout << "La suma es: " << sum <<endl;
    cout << "El producto es: " << prod<< endl;
    cout << "El promedio es: " << prom << endl;

    int min = num1;
    int max = num1;
        /*if (min > num2)
        {
            min = num2;
            if (min > num3)
            min = num3;
                if (min > num1)
                min = num1;   
        }


        if (max < num2)
        {
            max = num2;
            if (max < num3)
            max = num3;
                if(max < num1)
                max = num1;*/


        
         if (num1 < num2 && num1 < num3)
            min = num1;
        if (num2 < num1 && num2 < num3)
            min = num2;
        if (num3 < num1 && num3 < num1)
            min = num3;

        if (num1 < num2 && num1 < num3)
            max = num1;
        if (num2 < num1 && num2 < num3)
            max = num2;
        if (num3 < num1 && num3 < num1)
            max = num3;

        cout << "menor numero es; "<< min << endl;
        cout << "mayor numero es; " << max << endl;

            return 0;
}
