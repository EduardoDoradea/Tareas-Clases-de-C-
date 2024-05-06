#include <iostream>
using namespace std;
int main(){
int resu, n;

cout << "Ingrese un numero entero:" ;
cin >> n;

resu = n % 2;
switch(resu)
{
case 0:
cout << n <<" es par";
break;

case 1:
cout << n << " es impar";
break;

default:
cout<< "Los datos ingresados son incorrectos";
}
    return 0;
}