#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
using namespace std;
void llenarArray(int *pointer,int numero){
    for(int i=0;i<numero;i++){
        pointer[i]=rand()%1000;
    }
}
void imprimirArray(int *pointer,int numero){
    cout<<"Array principal impreso: "<<endl;
    for(int i=0;i<numero;i++){
       cout<<pointer[i]<<"   ";
    }
    cout<<endl;
}
int obtenerMuliplos7(int *pointer,int numero){
    int counter=0;
    for(int i=0;i<numero;i++){
        if (pointer[i]%7==0)
            counter++;
}
    cout<<counter<<"counter7 ";
    return counter;
}
int obtenerMuliplos5(int *pointer,int numero){
    int counter=0;
    for(int i=0;i<numero;i++){
        if (pointer[i]%5==0)
            counter++;
    }
    cout<<counter<<"counter5 ";
    return counter;
}
void llenarArray7(int *pointer,int *pointer7,int numero,int numero7) {
    for (int i = 0,j=0; i < numero; i++)
        if (pointer[i] % 7 == 0){
        pointer7[j]=pointer[i];
        j++;}
}
void llenarArray5(int *pointer,int *pointer5,int numero,int numero5) {
    for (int i = 0,j=0; i < numero; i++)
        if (pointer[i] % 5 == 0){
            pointer5[j]=pointer[i];
            j++;}
}
void imprimirArray5(int *pointer5,int numero5){
    cout<<"Array de los multiplos de 5: "<<endl;
    for(int i=0;i<numero5;i++){
        cout<<pointer5[i]<<"   ";
    }
    cout<<endl;
}
void imprimirArray7(int *pointer7,int numero7){
    cout<<"Array de los multiplos de 7:"<<endl;
    for(int i=0;i<numero7;i++){
        cout<<pointer7[i]<<"   ";
    }
    cout<<endl;
}
int main() {
    srand(time(nullptr));
    int numero, numeros5, numeros7;
    int *puntero = nullptr;
    int *puntero5 = nullptr;
    int *puntero7 = nullptr;
    cout << "Ingrese el numero de filas: ";
    cin >> numero;
    puntero=new int[numero];
    llenarArray(puntero, numero);
    numeros5 = obtenerMuliplos5(puntero, numero);
    numeros7 = obtenerMuliplos7(puntero, numero);
    puntero5=new int[numeros5];
    puntero7=new int[numeros7];
    llenarArray5(puntero, puntero5, numero, numeros5);
    llenarArray7(puntero, puntero7, numero, numeros7);
    imprimirArray(puntero, numero);
    imprimirArray5(puntero5,numeros5);
    imprimirArray7(puntero7,numeros7);
    delete []puntero;
    delete [] puntero5;
    delete [] puntero7;
    puntero=nullptr;puntero5= nullptr;puntero7= nullptr;
}
