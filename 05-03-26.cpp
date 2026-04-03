#include<stdio.h>
#include<iostream>
#include<Windows.h>
using namespace std;
int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x=10,y=3;
	int z=10;
	int *dirz=&z;
	cout<<x<<"+"<<y<<"="<<x+y<<"\n";
	cout<<x<<"-"<<y<<"="<<x-y<<"\n";
	cout<<x<<"*"<<y<<"="<<x*y<<"\n";
	cout<<x<<"/"<<y<<"="<<x/y<<"\n";
	cout<<x<<" residuo% "<<y<<"="<<x%y<<"\n";
	cout<<x<<" incrementado= "<<++x<<" o bien "<<x+1<<"\n";
	cout<<x--<<" decrementado\n";
	printf("Dame un numero entero para saber si es + o -: ");
	cin>>x;
	x>0?cout<<"positivo ":cout<<" negativo ";
	cout<<"\nDame un numero entero para saber si es +,-, o 0:";
	cin>>x;
	x>0?cout<<" positivo ":x<0?cout<<" negativo ":cout<<"es cero\n";
	x=0;
	cout<<" El valor de z: "<<z<<endl;
	cout<<"La direccion de z (&z) es: "<< &z <<endl;
	cout<<"La direccion de z almacenada en dirz: "<<dirz<<endl;
	cout<<"El contenido en *dirz: "<<*dirz<<endl;
	return 0;
	
	
	
}