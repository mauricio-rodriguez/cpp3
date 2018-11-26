#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void poblarArreglo(double arr[],int n){
    srand(time(nullptr));
    for (int i=0;i<n;i++){
        arr[i]= 100+rand()%900;
        int valor= arr[i];
        for (int j=0;j<n;j++){
            if (i!=j &&valor==arr[j]){
                arr[i]= 100+rand()%900;
            }
        }
        cout<<"Numero: "<<i+1<<": "<<arr[i]<<endl;
    }
    cout<<endl;
}
void mostrarArreglo(){

}
int main() {
    double array[100];
    poblarArreglo(array,100);
}
