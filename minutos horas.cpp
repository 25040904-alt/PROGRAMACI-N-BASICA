#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int minutos, horas, residuo, min2;
	cout<<"Dame la cantidad de minutos a covertir: ","\n";
	cin>>minutos;
	horas=trunc(minutos/60);
	residuo=(minutos/60)-horas;
	min2=residuo*60;
	cout<<minutos<<" minutos equivale a "<<horas<<":"<<min2<<" horas\n";
	printf("%2d minutos equivalen a %02d:%02d horas",minutos, horas, min2);
	
	
	
	return 0;
}