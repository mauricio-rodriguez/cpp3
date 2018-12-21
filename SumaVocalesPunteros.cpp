#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdio>
#include <vector>
#include <conio.h>
#include <algorithm>
#include <iomanip>
using namespace std;
void pedirDatos(char *name){
    cout<<"Ingrese su nombre completo: ";
    cin.getline(name,30,'\n');
}
int contarVocales(char *pointer){
    int cont =0;
   while(*pointer){
        switch (*pointer) {
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' : cont++;
        }
        pointer++;
        }
        return cont;
}
int main(){
    char name[30];
    pedirDatos(name);
    cout<<"el num de vocales es "<<contarVocales(name);
    return 0;
}
