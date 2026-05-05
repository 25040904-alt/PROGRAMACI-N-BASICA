#include<windows.h>
#include<iostream>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char otro='S';
	int cuantos, suma, x;
	float promedio;
	cuantos=0;
	suma=0;
	for(;otro=='S';);
	{
		cout<<"Dame un numero: ";
		cin>>x;
		cuantos++;
		cout<<"Quieres capturar otro? (S/N)";
		cin>>otro;
		otro=toupper(otro);
	}
	promedio=suma/cuantos;
	cout<<"Fueron "<<cuantos<<" numeros\n";
	cout<<"La sumatoria es="<<suma<<"\n";
	cout<<"El promedio es="<<promedio<<"\n";	
	return 0;
}