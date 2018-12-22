#include <iostream>
using namespace std;
int determinacapicua(int numero){
    int numerofinal=0;
    int copia= numero;
    for (int i=1;i <= numero;){
        numerofinal=numerofinal*10+numero%10;
        numero/= 10;
        cout<<numerofinal<<endl;
    }
    if (copia == numerofinal)
    {cout<<"es capicua";}
    else if (numerofinal != copia)
    {cout<<"no es capicua";}
    return 0;
}


int main() {
        int num;
        cout<<"escribe tu numero: ";
        cin>>num;
        determinacapicua(num);
    return 0;
}
