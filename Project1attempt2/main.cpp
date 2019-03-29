#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string mostrarRefranCompleto(int n){
    string refranesCompletos[7]={"A palabras necias, oidos sordos",
                                 "A caballo regalado, no se le miran los dientes","Camaron que se duerme, se lo lleva la corriente",
                                 "Al que madruga, Dios lo ayuda",
                                 " El que no arriesga, no gana",
                                 "Ojos que no ven, corazon que no siente",
                                 "Mas sabe el diablo por viejo, que por diablo"};
    return refranesCompletos[n];
}
void mostrarRefranIncompleto(int n){
    string frase= mostrarRefranCompleto(n);
    unsigned int ubicacion=frase.find(',');
    unsigned int distancia = frase.length();
    for (int j=0;j<ubicacion+2;j++){
        cout<<frase[j];
    }
    for (int k=ubicacion+2;k<distancia;k++){
        char x=frase[k];
        if (x == ' '){
            cout<<' ';}
        else {
            cout<<'*';
        }
    }
    cout<<endl;
}
string obtenerRespuesta(){
    string respuesta;
    getline(cin,respuesta);
    return respuesta;
}
void compararRespuesta(string respuesta,int n) {
    string frase = mostrarRefranCompleto(n);
    unsigned int ubicacion = frase.find(',');
    unsigned int distancia = frase.length();
    if (respuesta == frase.substr(ubicacion+2,distancia)) {
        cout<<"Excelente, ha ganado 1 punto"<< endl<<endl;
    }
    else {cout<<"Incorrecto, la respuesta correcta es : "<<endl<<mostrarRefranCompleto(n)<<endl;}
}
void mostrarSignificado(int n){
    string significado[]={
            "Hacer caso omiso a opiniones y comentarios infundados",
            "Cuando se recibe un obsequio no se le debe criticar ni hacer observaciones negativas",
            "La pereza tiene consecuencias negativas para la vida",
            "Busca empezar el dia con buen pie siendo diligente en tus acciones",
            "Es necesario arriesgar algo para conseguir algo que se desee",
            "Si no ves algo, no sufres por ello",
            "El pasar de los años aporta conocimiento"
    };
    cout<<significado[n]<<endl<<endl;
}
void menuPrograma(){
    int numero=0;
    int jugarOmitir=2;
    string sin;
    for (int i=0;i<50;i++){
        cout<<"*";
    }
    cout<<endl<<"Bienvenidos al juego de refranes: "<<endl;
    while (numero!=2){
        cout<<"Ingrese el numero de la opcion que desea utilizar"<<endl<<endl;
        cout<<"(1) Jugar a completar refranes"<<endl;
        cout<<"(2) Salir"<<endl<<endl;
        cout<<"Ingrese el numero: "<<endl;
        cin>>numero;
        switch(numero) {
            case 1:
                int array[100];
                while (jugarOmitir==2){
                    srand(time(nullptr));
                    int ale= rand()%7;
                    array[0]= ale;
                    mostrarRefranIncompleto(ale);
                    cout <<endl<< "Ingrese 1 si desea jugar 2 si desea omitir el refran y ver otro: "<< endl;
                    cin>>jugarOmitir;}
                switch(jugarOmitir){
                    case 1:
                        cout<<"ingrese su respuesta: "<<endl;
                        obtenerRespuesta();
                        compararRespuesta(obtenerRespuesta(),array[0]);
                        cout<<"¿Desea saber el significado?"<<endl;
                        cin>>sin;
                        if (sin =="si" || sin=="SI"|| sin=="Si"){
                    cout<<"significa: ";mostrarSignificado(array[0]);}
                        else {cout<<"ok"<<endl;}
                        break;
                    default:
                        cout<<"ingrese una de las opciones"<<endl;
                }
            case 2:
                break;
            default:
                cout<<"Ingrese una de las 3 opciones"<<endl;
        }
    }}
int main(){
    menuPrograma();
    return 0;
}