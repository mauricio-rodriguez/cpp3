
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
using namespace std;
string generaTrama(int n){
    srand(time(nullptr));
    for (int i=0;i<n;++i){
        int random = rand()%2;;
            cout<<random;
    }
    return ":v";
}
int main(){
    int numero;
    cout<<"numero: ";
    cin>>numero;
    generaTrama(numero);


return 0;
}
