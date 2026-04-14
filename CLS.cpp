#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<<"Hola, esta es una prueba de limpieza de pntalla.\n";
	system("pause");
	system("cls");//LO QUE ES "CLS" LIMPIA DE PANTALLA
	system("pause");
	cout<<"La pantallas se ha limpiado."<<"\n";
	return 0;
}