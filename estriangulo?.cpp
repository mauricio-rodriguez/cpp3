#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

   int a=0;
   int b=0;
   int c=0;
   int opcion=0;
   cout<<"Ingrese dimesion del lado a: ";
   cin>>a;
   cout<<"Ingrese dimesion del lado b: ";
   cin>>b;
   cout<<"Ingrese dimesion del lado c: ";
   cin>>c;
   if (a>b-c && a<b+c) {
       if (b > a - c && b < a + c) {
           if (c > a - b && c <a + b) {
               cout << "Es triangulo" << endl;
               cout << " Menu" << endl;
               cout << "[1] Calcular area" << endl;
               cout << "[2] Calcular perimetro" << endl;
               cin >> opcion;
               switch (opcion) {
                   case 1:{
                   float sp= (a+b+c)/2;
                   double area= sqrt(sp*(sp-a)*(sp-b)*(sp-c));
                   cout <<setprecision(4)<<area;
                   break;
                   }
                   case 2:
                   cout << a + b + c;
                   break;
                   default:
                   {cout << "escoja uno de los 2";}
               }
           }
           else
           cout<<"no es triangulo";
       }
       else
           cout<<"no es triangulo";
   }
   else
        cout<<"no es triangulo";

    return 0;
}
                
