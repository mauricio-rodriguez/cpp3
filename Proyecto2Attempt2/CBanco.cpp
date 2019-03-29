//
// Created by Windows on 27/11/2018.
//
#include "CBanco.h"
#include "CCliente.h"
CCliente **pArrayClientes= nullptr;
int unTiempo;
string unNombre2;
int TiempoTotal=0;
void CBanco::GenerarCola(int TamanoCola){
    pArrayClientes= new CCliente*[TamanoCola];
}
void CBanco::AsignarNombresYTiempo(){
    for (int i=0;i<TamanoCola;i++){
        int a = i+1;
        string unNombre = "Cliente"+to_string(a);
        unTiempo= 3+(rand()%13);
        pArrayClientes[i]= new CCliente(unTiempo,unNombre);
    }
}
void CBanco::AsignarCajeros() {
    for (int i = 0; i < CantidadCajeros; i++) {
        int a = i+1;
        string unNombre2 = "Caja"+to_string(a);
        CCliente *unCliente;
        unCliente = pArrayClientes[i];
        pArrayCajeros[i] = new CCajero(unNombre2, unCliente);
    }
}

int CBanco::simularAtencion() {
    int num=CantidadCajeros;
    CCliente *Cliente;
    int suma=0;
    while (num!=TamanoCola){
    for (int i=0;i<CantidadCajeros;i++) {
            int a = i+1;
            string unNombre2 = "Caja"+to_string(a);
            cout<<pArrayCajeros[i]->getNombreCajero()<<"("<<pArrayCajeros[i]->getTiempoCajero()<<")"<<"; ";
        if (pArrayCajeros[i]->getTiempoCajero() == 0) {
            pArrayCajeros[i]= nullptr;
            pArrayCajeros[i] = new CCajero(unNombre2, pArrayClientes[num]);
            num++;
            if (num==TamanoCola){
                break;}
        }
        pArrayCajeros[i]->reducirTiempoCajero();
        }
        TiempoTotal++;
        cout<<endl;
    }
    return TiempoTotal;
}


