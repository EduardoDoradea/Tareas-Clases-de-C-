#include <iostream>
using namespace std;

int main(){
int n1;

cout<< "Digite un numero para conocer si es positivo o negativo:";
cin>> n1;

if(n1==0){
    cout<<"El numero que usted digito es cero";
} else if(n1>0){
    cout<<"El numero que usted digito es positivo";
}else{
    cout<<"El numero que usted digito es negativo";
}
 
return 0;
}


