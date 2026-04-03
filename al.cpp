#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float p1, p2, p3, c1, c2, c3;
	float cf1, cf2, cf3;
	int ct;
	cout<<"Dime la primer calificación: ";
	cin>>c1;
	cout<<"Cual es el porcentaje de la calificación: ";
	cin>>p1;
	cout<<"Dime la segunda calificación: ";
	cin>>c2;
	cout<<"Cual es el porcentaje de la calificación: ";
	cin>>p2;
	cout<<"Dime la tercer calificación: ";
	cin>>c3;
	cout<<"Cual es el porcentaje de la calificación: ";
	cin>>p3;
	cf1=(c1*p1)/100;
	cf2=(c2*p2)/100;
	cf3=(c3*p3)/100;
	cout<<"La primera calificación es: "<<cf1<<"\n";
	cout<<"La segunda calificación es: "<<cf2<<"\n";
	cout<<"La tercer calificación es: "<<cf3<<"\n";
	ct=cf1+cf2+cf3;
	cout<<"Tu calificación final es: "<<ct<<"\n";
	
if(ct<=70){
	cout<<"NP recursar"<<endl;
	
}else if(ct>=70){
	cout<<"FELICIDADES, acreditado"<<endl;
}
	
	return 0;
}