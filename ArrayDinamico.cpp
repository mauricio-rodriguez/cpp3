#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
void crearArray(int &filas, int &columnas,int **&puntero){
    puntero=new int*[filas];
    for (int i=0;i<filas;i++){
        puntero[i]=new int[columnas];
    }
}
void pedirDatos(int &filas,int &columnas){
    cout<<"Ingrese el numero de filas"<<endl;
    cin>>filas;
    cout<<"Ingrese el numero de columnas"<<endl;
    cin>>columnas;
}
void rellenarArray(int &filas,int&columnas,int **puntero){
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
           puntero[i][j]= rand()%20;
    }}
}
void imprimirArray(int &filas,int &columnas,int **puntero){
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            cout<<puntero[i][j];
            cout<<"\t";
        }
        cout<<"\n";
        }
}
int main(){
    srand(time(nullptr));
    int **puntero;
    int filas;
    int columnas;
    pedirDatos(filas,columnas);
    crearArray(filas,columnas,puntero);
    rellenarArray(filas,columnas,puntero);
    imprimirArray(filas,columnas,puntero);
    for (int i=0;i<filas;i++){
        delete [] puntero[i];
    }
    delete []puntero;
    puntero= nullptr;
}
