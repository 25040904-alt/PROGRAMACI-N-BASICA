#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float cantidadD, cantidadCU, tot1, tot2, tot3;
	int amigos, por1, por2, por3;
	amigos=3;
	cout<<"Dime cual fue la cantidad del premio: ";
	cin>>cantidadD;
	cout<<"Lo integrantes del equipo son: "<<amigos<<"\n";
	cout<<"Dime cual fue el porcentaje del 1er: ";
	cin>>por1;
	cout<<"Dime cual fue el porcentaje del 2do: ";
	cin>>por2;
	cout<<"Dime cual fue el porcentaje del 3er: ";
	cin>>por3;
	tot1=(por1*cantidadD)/100;
	tot2=(por2*cantidadD)/100;
	tot3=(por3*cantidadD)/100;
	cout<<"El primero saco: "<<tot1<<"\n";
	cout<<"Segundo: "<<tot2<<"\n";
	cout<<"Tercer: "<<tot3<<"\n";
	
	
	
	return 0;
}