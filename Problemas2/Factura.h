#include <iostream>
#include <string>

using namespace std;

class Factura{
    private{ 
        string numpie, descrip;
        int cantcompra, preciocompr; 
        double impuesto, descuento;
    }
    public {
        public(){
            numpie = "";
            descrip = "";
            cantcompra = 0;
            preciocompr = 0;
            impuesto = 0;
            descuento = 0;
        }
    Factura(string numpie_, string descrip_, int cantcompra_, int precicompr_, double impuesto_, double descuento_)
            numpie = numpie_
            descrip = descrip_
            cantcompra = cantcompra_
            preciocompr = preciocompr_
            impuesto = impuesto_
            descuento = descuento_
    void setnumpie (string numpie_)
        {
            numpie = numpie_;
        }
    void setdescrip (string descrip_)
        {
            descrip = descrip_;
        }
    void setcantcompra (int cantcompra_)
        {

        }



    }



}
