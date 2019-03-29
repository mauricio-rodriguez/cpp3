#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
void sumarArrays(int &filas,int&columnas,int **puntero1,int **puntero2){
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            cout<<puntero1[i][j]+puntero2[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
}
void crearArray(int &filas, int &columnas,int **&puntero1, int **&puntero2){
    puntero1=new int*[filas];
    puntero2=new int*[filas];
    for (int i=0;i<filas;i++){
        puntero1[i]= new int[columnas];
        puntero2[i]= new int[columnas];
    }
}
void pedirDatos(int &filas,int &columnas){
    cout<<"Ingrese el numero de filas"<<endl;
    cin>>filas;
    cout<<"Ingrese el numero de columnas"<<endl;
    cin>>columnas;
}
void rellenarArray(int &filas,int&columnas,int **puntero1,int **puntero2){
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
           puntero1[i][j]= 5+rand()%20;
           puntero2[i][j]= 4+rand()%50;
    }
    }
}
void imprimirArray(int &filas,int &columnas,int **puntero1,int **puntero2){
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            cout<<puntero1[i][j];
            cout<<"\t";
        }
        cout<<"\n";
        }
        cout<<"\n";
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            cout<<puntero2[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
int main(){
    srand(time(nullptr));
    int **puntero_Matriz1;
    int **puntero_Matriz2;
    int filas;
    int columnas;
    pedirDatos(filas,columnas);
    crearArray(filas,columnas,puntero_Matriz1,puntero_Matriz2);
    rellenarArray(filas,columnas,puntero_Matriz1,puntero_Matriz2);
    imprimirArray(filas,columnas,puntero_Matriz1,puntero_Matriz2);
    sumarArrays(filas,columnas,puntero_Matriz1,puntero_Matriz2);
    for (int i=0;i<filas;i++){
        delete []puntero_Matriz1[i];
        delete []puntero_Matriz2[i];
    }
delete puntero_Matriz1;
delete puntero_Matriz2;
}
