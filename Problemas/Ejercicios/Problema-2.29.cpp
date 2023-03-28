#include <iostream>
using namespace std;

int main () {

    int area1, area2, area3, area4, area5, volumen1, volumen2, volumen3, volumen4, volumen5;
    int n1=0, n2=1, n3=2, n4=3, n5=4;

    area1=6*(n1*n1);
    area2=6*(n2*n2);
    area3=6*(n3*n3);
    area4=6*(n4*n4);
    area5=6*(n5*n5);

    volumen1=n1*n1*n1;
    volumen2=n2*n2*n2;
    volumen3=n3*n3*n3;
    volumen4=n4*n4*n4;
    volumen5=n5*n5*n5;
  

    cout<<"Logintud de la cara del cubo (cm): \t El area de la superficie del cubo (cm^2): \t El volumen del cubo (cm^3): "<<endl;
    cout<<n1<<"\t\t\t\t\t "<<area1<<"\t\t\t\t\t\t "<<volumen1<<"\n"<<n2<<"\t\t\t\t\t "<<area2<<"\t\t\t\t\t\t "<<volumen2
    <<"\n"<<n3<<"\t\t\t\t\t "<<area3<<"\t\t\t\t\t\t "<<volumen3<<"\n"<<n4<<"\t\t\t\t\t "<<area4<<"\t\t\t\t\t\t "<<volumen4
    <<"\n"<<n5<<"\t\t\t\t\t "<<area5<<"\t\t\t\t\t\t "<<volumen5;
}