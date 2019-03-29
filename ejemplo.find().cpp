
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char dato;
    string mayusculas= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string minusculas ="abcdefghijklmnopqrstuvwxyz";
    
    cout<<"Ingrese dato: "<<endl;
    cin>>dato;
    if (mayusculas.find(dato)!=-1){
        for(int i=0;i<mayusculas.size();i++){
            cout<<mayusculas[i];
        }
    }
    else if (minusculas.find(dato)!=-1){
         for(int i=0;i<minusculas.size();i++){
            cout<<minusculas[i];
        }
    }
    else {
        for (int i=100;i!=-1;i=i-5){
            cout<<i<<" ";
        }
    }
    return 0;
}
