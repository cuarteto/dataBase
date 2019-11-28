#include "inventario.h"

inventario::inventario(){
    /**numeromesas=8; numerosillas=40; numeroestantes=7;
    mesasbuenestado=0;sillasbuenestado=0;estantesbuenestado=0;
    mesasmalestado=0;sillasmalestado=0;estantesmalestado=0;*/
    nombre=""; color=""; modelo="";
}

inventario::~inventario()
{
    //dtor
}

inventario::inventario(string lineafile){
vector <string> fichero;
    stringstream ss(lineafile);
    string actual;
    while (getline(ss, actual, ','))
        fichero.push_back(actual);
    nombre=fichero[0];
    color=fichero[1];
    modelo=fichero[2];
}

inventario::inventario(string nombre,string color, string modelo){
this->nombre=nombre;
this->color=color;
this->modelo=modelo;
}

void inventario:: mesas (){
     /**this->numeromesas=numeromesas;
     cout<< "Ingrese el numero de mesas en buen estado:"<<endl;
     this->mesasbuenestado=mesasbuenestado;
     cin>> mesasbuenestado;
     cout<< "Ingrese el numero de mesas en mal estado: "<<endl;
     this->mesasmalestado=mesasmalestado;
     cin>> mesasmalestado;
        if ((mesasbuenestado==numeromesas)&& (mesasmalestado==0)){
            cout<<"Gracias, el inventario de mesas fue completado con exito"<<endl;
        }
        if (mesasmalestado>0){*/
    cout<<"Ingrese el nombre del articulo danado: "<<endl;
    string articulo;
    cin>> articulo;
    this->nombre=articulo;
    cout<<"Ingrese el color del articulo danado: "<<endl;
    string articulocolor;
    cin>> articulocolor;
    this->color=articulocolor;
    cout<<"Ingrese el material del articulo danado: "<<endl;
    string material;
    cin>> material;
    this->modelo=material;
}

void inventario:: sillas (){
     /**this->numerosillas=numerosillas;
     cout<< "Ingrese el numero de sillas en buen estado:"<<endl;
     this->sillasbuenestado=sillasbuenestado;
     cin>> sillasbuenestado;
     cout<< "Ingrese el numero de sillas en mal estado: "<<endl;
     this->sillasmalestado=sillasmalestado;
     cin>> sillasmalestado;
        if ((sillasbuenestado==numerosillas)&& (sillasmalestado==0)){
            cout<<"Gracias, el inventario de sillas fue completado con exito"<<endl;
        }
        if (sillasmalestado>0){*/
    cout<<"Ingrese el nombre del articulo danado: "<<endl;
    string articulo;
    cin>> articulo;
    this->nombre=articulo;
    cout<<"Ingrese el color del articulo danado: "<<endl;
    string articulocolor;
    cin>> articulocolor;
    this->color=articulocolor;
    cout<<"Ingrese el material del articulo danado: "<<endl;
    string material;
    cin>> material;
    this->modelo=material;
}

void inventario:: estantes (){
     /**this->numeroestantes=numeroestantes;
     cout<< "Ingrese el numero de estantes en buen estado:"<<endl;
     this->estantesbuenestado=estantesbuenestado;
     cin>> estantesbuenestado;
     cout<< "Ingrese el numero de estantes en mal estado: "<<endl;
     this->estantesmalestado=estantesmalestado;
     cin>> estantesmalestado;
        if ((estantesbuenestado==numeroestantes)&& (estantesmalestado==0)){
            cout<<"Gracias, el inventario de estantes fue completado con exito"<<endl;
        }
        if (estantesmalestado>0){*/
    cout<<"Ingrese el nombre del articulo danado: "<<endl;
    string articulo;
    cin>> articulo;
    this->nombre=articulo;
    cout<<"Ingrese el color del articulo danado: "<<endl;
    string articulocolor;
    cin>> articulocolor;
    this->color=articulocolor;
    cout<<"Ingrese el material del articulo danado: "<<endl;
    string material;
    cin>> material;
    this->modelo=material;
}

