#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int age;
	float c;
	cout<<"Ingresa tu edad: ";
	cin>>age;
if(age>=18){
	cout<<"Puedes ingresar"<<endl;
}else if(age<=18){
	cout<<"No puedes ingresar"<<endl;
}
	cout<<"Cual es tu calificación: ";
	cin>>c;
if(c<70){
	cout<<"Es muy bajo no tienes permiso"<<endl;
	cout<<"No puedes hacer nada"<<endl;
}else if(c>=70){
	cout<<"Excelente tienes permiso"<<endl;
	cout<<"Escoje cualquier actividad"<<endl;
}



	return 0;
}