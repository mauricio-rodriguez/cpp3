#ifndef PROYECTO2_CCLIENTE_H
#define PROYECTO2_CCLIENTE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;


class CCliente{
private:
    string NombreCliente;
    int tiempo;
public:
    CCliente(){}
    CCliente(int _tiempo,string _nombre): NombreCliente(_nombre),tiempo(_tiempo){}

    ~CCliente(){}//---DESTRUCTOR
    //----SETTEAR DATOS DEL CLIENTE
    //---GETTERS
    string getNombre(){return NombreCliente;}
    int getTiempo(){return tiempo;}
    void reducirTiempo(){tiempo=tiempo-1;}

};
#endif //PROYECTO2_CCLIENTE_H