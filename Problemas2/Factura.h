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
        Factura(){
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
            cantcompra = cantcompra_;
        }
    void setpreciocomp (int preciocomp)
        {
            preciocomp = preciocomp_:
        }
    void setimpuesto (double impuesto_)
        {
            impuesto = impuesto_;
        }      
    void setdescuento (double descuento_)
        {
            descuento = descuento_;
        }
    string getnumpie()
        {
            return = numpie;
        }
    string getdescrip ()
        {
            retunr = descrip;
        }
    int getcantcompra ()
        {
            return = cantcompra;
        }
    int getpreciocomp()
        {
            return = preciocomp;
        }
    double getimpuesto()
        {
            return = impuesto;
        }
    double getdescuento()
        {
            return = descuento
        }
    }



};
