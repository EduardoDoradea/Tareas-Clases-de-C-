#include <iostream>

using namespace std;
int main(){
int n=0, m=1;
int multiplicacion;

cout<< "Ingrese un numero para conocer las tablas:";
cin>> n;

while(n<=m){
    multiplicacion=m*n;
    cout<< n << "x" << m << "=" <<multiplicacion<< "\n";
    
    m++;
}

    return 0;
}