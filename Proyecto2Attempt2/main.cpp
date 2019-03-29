#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "CCliente.h"
#include "CCajero.h"
#include "CBanco.h"

using namespace std;
typedef int TipoNumerico;

int main() {
    CBanco *CajerosA;
    srand(time(nullptr));
    TipoNumerico clientes,cajas;
    cout<<"Ingrese numero de clientes: "; cin>>clientes;
    cout<<"\nIngrese el numero de cajas activas: "; cin>>cajas;
    CajerosA= new CBanco(cajas,clientes);
    CajerosA->GenerarCola(clientes);
    CajerosA->AsignarNombresYTiempo();
    CajerosA->AsignarCajeros();
    cout<<"Tiempo total utilizado "<<CajerosA->simularAtencion()<<" minutos";
    delete CajerosA;
    CajerosA= nullptr;
    return 0;
}