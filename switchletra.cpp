#include <iostream>
using namespace std;

int main(){
char letra;
cout << "Ingrese una letra en mayuscula para saber su color:";
cin >> letra;

switch(letra){

case 'R':
cout << letra << " es color rojo.";
break;    

case 'Y':
cout << letra << " es color amarillo.";
break;

case 'B':
cout << letra << " es color azul.";
break;    

case 'W':
cout << letra << " es color blanco.";
break;    

case 'K':
cout << letra << " es color  negro.";
break;    

case 'C':
cout << letra << " es color cian.";
break;    

case 'G':
cout << letra << " es color verde.";
break;    
    default:
    cout<< "El caracter que has colocado no tiene color.";

}


    return 0;
}