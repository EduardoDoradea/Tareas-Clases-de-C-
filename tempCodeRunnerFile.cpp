#include <iostream>
using namespace std;

int main(){
int n, modulo=0;

cout<<"Ingrese un numero entero";
cin>>n;

for(int i=n-1; i>=2; i=i-1)
{
modulo= n%1;
cout<<i<<"\n";
}

    return 0;
}