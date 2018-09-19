#include <iostream>
#include <stdlib.h>
using namespace std;
char generavocal(){
    string letras = "qwertyuiopasdfghjklñzxcvbnmQWERTYUIOPASDFGHJKLÑZXCVBNM";
    int i=54;
    char letra= letras[rand()%54];
    return letra;

}

int main() {
    cout<<generavocal();
    return 0;
}
