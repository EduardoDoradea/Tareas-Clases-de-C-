#include <iostream>
using namespace std;

int main(){
char opcion, variable='A', variable2='B', variable3='C';

do {
cout<< "Menu" <<"\n";
cout<< "A Carne asada" <<"\n";
cout<< "B Pollo" <<"\n";
cout<< "C Cerdo" <<"\n";
cout<< "Seleccione una opcion." <<"\n";
cin>> opcion;
cout<< "opcion selecionada" << opcion <<"\n";
}
while (opcion != variable and opcion != variable2 and opcion != variable3);

    return 0;
}