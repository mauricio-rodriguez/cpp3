#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void potencia(int *ptr,int n){
    *ptr= pow(*ptr,n);
    cout<<*ptr;
}
int main() {
    int x,pot;
    cout<<"Ingrese valor:"<<endl;
    cin>>x;
    cout<<"Ingrese a que potencia elevar"<<endl;
    cin>>pot;
    cout<<"la potencia es: ";potencia(&x,pot);
    return 0;

}
