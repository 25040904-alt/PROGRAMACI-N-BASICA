#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float llamadaTiempo, cuotaM, pagoFinal;
	cout<<"Cuanto tiempo fue de la llamada: ","\n";
	cin>>llamadaTiempo;
	cout<<"Cuanto es de cuotaM: ","\n";
	cin>>cuotaM;
	pagoFinal=llamadaTiempo*cuotaM;
	printf("El pago final de tu llamada es: %.2f\n",pagoFinal);
	
	return 0;
	
}