//
// Created by Windows on 27/11/2018.
//
#ifndef PROYECTO2_CCAJERO_H
#define PROYECTO2_CCAJERO_H

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "CCliente.h"
using namespace std;

class CCajero{
private:
    CCliente *Cliente;
    string NombreCajero;
public:
    CCajero(){}
    CCajero(string _nombre,CCliente *unCliente):NombreCajero(_nombre),Cliente(unCliente){
    }
    ~CCajero(){}
    int getTiempoCajero(){
        int a=Cliente->getTiempo();
        return a;
    }
    string getNombreCajero(){
        return NombreCajero;
    }
    string getNombreCliente(){
        return Cliente->getNombre();
    }
    void reducirTiempoCajero(){
        Cliente->reducirTiempo();
    }
};

#endif //PROYECTO2_CCAJERO_HCCAJERO_H