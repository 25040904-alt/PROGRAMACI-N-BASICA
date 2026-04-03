#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int rc, ri, rb, rt, cf, pf;
	cout<<"Cuantas preguntas son en total: ";
	cin>>rt;
	cout<<"Dime la cantidad de respuestas correctas: ";
	cin>>rc;
	cout<<"Dime la cantidad de respuestas incorrectas: ";
	cin>>ri;
	cout<<"Dime la cantidad de respuestas en blanco: ";
	cin>>rb;
	cf=(rc*5)+(ri*(-1))+(rb*0);
	cout<<"Tu calfificacion final es: "<<cf<<"\n";
	pf=rc*100/rt;
	cout<<"El porcentaje de las preguntas es: "<<pf<<"\n";
	
	
	return 0;
}