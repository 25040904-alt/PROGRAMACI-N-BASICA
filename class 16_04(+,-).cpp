#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float numero;
	cout<<"Dime un numero para ver si es positivo o negativo: \n";
	cin>>numero;
	if(numero>0)
	    cout<<"El numero es + ";
	else if(numero<0)
	    cout<<"El numero es - ";
	else
	    cout<<"El numero es 0 ";
	return 0;
	}