#include<iostream>
using namespace std;

int main()
{
    double edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    cout<<" "<<endl;
   
    int MHR1 = 220 - edad;

    int MHR2 = 208 - 0.7*edad;

    int MHR3 = 207 - 0.7*edad;

    int MHR4 = 211 - 0.64*edad;


    cout << "Segun la formula base tu MHR es: "<< MHR1 <<endl;
    cout << "Segun TANAKA tu MHR es: "<< MHR2 <<endl;
    cout << "Segun GELLISH tu MHR es: "<< MHR3 <<endl;
    cout << "Segun NEST ET tu MHR es: "<< MHR4 <<endl;
    
    double min;
    double max;

    max = MHR1;
    min = MHR1;
  
  if(MHR2 > max) {
    max = MHR2;
  } else if(MHR2 < min) {
    min = MHR2;
  }
  if(MHR3 > max) {
    max = MHR3;
  } else if(MHR3 < min) {
    min = MHR3;
  }
  if(MHR4 > max) {
    max = MHR4;
  } else if(MHR4 < min) {
    min = MHR4;
  }
    cout << "Los valores MHR mas grandes y mas pequeños calculados son: " << max <<" y " << min; 
    
    
    return 0;
}

