#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
using namespace std;
typedef int size;
constexpr size nFilas=7,nColumnas=7;
void llenarArray(int array[][nColumnas]){
    for(int i=0;i<nFilas;i++){
        for (int j=0;j<nColumnas;j++){
           array[i][j]= 1+rand()%100;
        }
    }
}
void hallarMenor(int array[][nColumnas]){
    int menor= array[0][0];
    for(int i=0;i<nFilas;i++){
        for (int j=0;j<nColumnas;j++){
            if (array[i][j]<menor){
                menor=array[i][j];
            }
        }
    }
    cout<<"El menor es: "<<menor<<endl;
}
void imprimirDiagonal(int array[][nColumnas]){
    cout<<"Diagonal: ";
    for(int i=0;i<nFilas;i++){
        cout<<array[i][i]<<endl;
        }
    }

void imprimirDiagonalSuperior(int array[][nColumnas]){
    cout<<"Diagonal superior: ";
    for(int i=0;i<nFilas-1;i++){
            cout<<array[i][i+1];
        cout<<endl;
    }
}
void imprimirArray(int array[][nColumnas]){
    cout<<"Array: "<<endl;
    for(int i=0;i<nFilas;i++){
        for (int j=0;j<nColumnas;j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    srand(time(nullptr));
    size array[nFilas][nColumnas];
    llenarArray(array);
    hallarMenor(array);
    imprimirArray(array);
    imprimirDiagonal(array);
    imprimirDiagonalSuperior(array);

}

