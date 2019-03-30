#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream archivo("biblia.txt",ios::in);
    string palabra;
    char letra;
    int CantLetras=0,CantPalabras=0,CantLineas=0;

    while (archivo>>palabra)
        CantPalabras++;
    archivo.close();

    archivo.open("biblia.txt",ios::in);
    while (archivo>>letra)
        CantLetras++;
    archivo.close();

    archivo.open("biblia.txt",ios::in);
    while (getline(archivo,palabra))
        CantLineas++;
    archivo.close();

    cout<<"Numero de letras: "<<CantLetras<<endl;
    cout<<"Numero de palabras: "<<CantPalabras<<endl;
    cout<<"Numero de lineas: "<<CantLineas<<endl;
    return 0;
}
