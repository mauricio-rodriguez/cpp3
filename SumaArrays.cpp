#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
using namespace std;

 void llenarArray1(int array[]){
    for (int i=0;i<21;i++){array[i]=1+rand()%100;}
}
void printArray1(int array[]){
     cout<<"1er array: ";
    for (int i=0;i<21;i++){
    cout<<array[i]<<" ";
    }
    cout<<endl;
}
void llenarArray2(int array[]){
    for (int i=0;i<21;i++){array[i]=1+rand()%100;}
}
void printArray2(int array[]){
    cout<<"2do array: ";
    for (int i=0;i<21;i++){
    cout<<array[i]<<" ";
    }
    cout<<endl;
}
void Suma(int array1[],int array2[],int array3[]){
for (int i=0;i<21;i++){
    array3[i]= array1[i]+array2[i];
}
}
void printSuma(int array[]){
    cout<<"3er array: ";
    for (int i=0;i<21;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    srand(time(nullptr));
    int array1[20];
    int array2[20];
    int array3[20];
    llenarArray1(array1);
    llenarArray2(array2);
    printArray1(array1);
    printArray2(array2);
    Suma(array1,array2,array3);
    printSuma(array3);

}
