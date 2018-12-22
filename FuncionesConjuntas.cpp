
#include <iostream>
#include <cmath>
using namespace std;
int leernumero(){
    int n;
    cout<<"ingrese numero: ";
    cin>>n;
    return  n;
}

double inversofactorial(int n){
    double  producto=1;
    for (int i=1;i<=n;i++){
        producto=producto*i;
    }
    return 1/producto;
}
int potencia2(int n){
    int a=0;
    for (int i=1;i<=n;++i){
        a =pow(2,i);
        if (a>n){
            break;
        }
    }
    return a/2;
}
int sumaimpares(int n){
    int suma=0;
    for (int i=1;i<n;i+=2)
        suma=suma+i;
    return suma;
}
void imprimeresultados(int n){
    cout<<" maxima potencia de 2 menor o igual al numero: "<<potencia2(n)<<endl;
    cout<<"suma de impares menores al numero :"<<sumaimpares(n)<<endl;
    cout<<"factorial inverso: "<<inversofactorial(n);
}
int main()
{
    imprimeresultados(leernumero());
    return 0;
}
