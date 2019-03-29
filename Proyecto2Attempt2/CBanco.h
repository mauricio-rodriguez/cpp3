//
// Created by Windows on 27/11/2018.
//

#ifndef PROYECTO2_CBANCO_H
#define PROYECTO2_CBANCO_H

#include "CCajero.h"
class CBanco{
private:
    CCajero **pArrayCajeros= nullptr;
    int CantidadCajeros;
    int CantidadClientes;
    string unNombre;
    int TamanoCola;
public:
    CBanco(){};
    CBanco(int _CantidadCajeros,int _CantidadClientes):CantidadCajeros(_CantidadCajeros),TamanoCola(_CantidadClientes){
        pArrayCajeros= new CCajero*[CantidadCajeros];
        for( int i = 0; i < CantidadCajeros; i ++)
            pArrayCajeros[i]= new CCajero;
        //---array de cajeros
    }
    ~CBanco(){
        for (int i=0;i<CantidadCajeros;i++){
            delete pArrayCajeros[i];
            delete []pArrayCajeros;
        }
    }
    void GenerarCola(int TamanoCola);
    void AsignarNombresYTiempo();
    int getTiempoCajero(int i);
    CCliente getCliente(int n);
    void AsignarCajeros();
    int simularAtencion();
    int getCantidadCajeros(){return CantidadCajeros;}
};

#endif //PROYECTO2_CBANCO_H