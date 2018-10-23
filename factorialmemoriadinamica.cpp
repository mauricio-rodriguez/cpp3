#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int  *p1= nullptr,*p2= nullptr;
    p1=new int;
    p2=new int;
    double factorial=1;
    cout<<"Ingrese numero 1: "<<endl;
    cin>>*p1;
    cout<<"Ingrese numero 2: "<<endl;
    cin>>*p2;
    for (int i=1;i<=*p1;i++){
        factorial=factorial*i;
    }
    cout<<"factorial numero 1: "<<factorial<<endl;
    factorial=1;
    for (int i=1;i<=*p2;i++){
        factorial=factorial*i;
    }
    cout<<"factorial numero 2: "<<factorial;
    delete p1;
    delete p2;
}
