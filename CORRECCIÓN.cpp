#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float c1, c2, cf, c1F, c2F, cfF;
	int por1, por2, porF, cT;
	por1=10;
	por2=10;
	porF=80;
	cout<<"Dime la calificacion del primero: ";
	cin>>c1;
	
	cout<<"Dime la calificacion del segundo: ";
	cin>>c2;
	
	cout<<"Dime la calificacion del final: ";
	cin>>cf;
	
	
	c1F=(c1*por1)/100;
	c2F=(c2*por2)/100;
	cfF=(cf*porF)/100;
	
	
	cT=(c1F+c2F+cfF);
	cout<<"La calificación de todo es: "<<cT<<"\n";
	
	return 0;
}