#include <iostream>
using namespace std;

int main(){
int dia;
cout << "Ingrese un numero del rango del 1 al 7 para saber que dia es:";
cin >> dia;

switch(dia){

case 1:
cout << dia << " El dia es lunes";
break;

case 2:
cout<< dia << " El dia es martes";
break;

case 3:
cout<< dia << " El dia es miercoles";
break;

case 4:
cout<< dia << " El dia es jueves";
break;

case 5:
cout<< dia << " El dia es viernes";
break;

case 6:
cout<< dia << " El dia es sabado";
break;

case 7:
cout<< dia << " El dia es domingo";
break;
    default:
cout<< "La opcion ingresada es invalida";
}

    return 0;
}