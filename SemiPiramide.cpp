#include <iostream>
using namespace std;
float mayor(float x ,float y ,float z){
    return __max(x,y);
}
int main() {
    int alto = 0;
    int ancho=0;
    int a=0;
    cout<<"ingrese alto: ";
    cin>>alto;
    for (int i=1;i<=alto;i++){
        cout<<"\n";
        for (int j=1;j<=i;j++){
            cout<<"#";
        }

    }

    return 0;
}
