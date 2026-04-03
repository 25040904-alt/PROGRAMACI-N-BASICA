#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	//Angel Leonardo Reza Casares 25040904
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float c1, c2, finalEv, primer, segundo, evaluacionFinal;
	int caliFinal, por1, por2, porFinal;
	
	cout<<"Cuanto fue tu primera calificación: ";
	cin>>primer;
	cout<<"Cuanto es el porcentaje de la primera: ";
	cin>>por1;
	cout<<"Cuanto fue tu segunda calificación: ";
	cin>>segundo;
	cout<<"Cuanto es el porcentaje de la segunda: ";
	cin>>por2;
	cout<<"Cuanto fue tu calificación final: ";
	cin>>evaluacionFinal;
	cout<<"Cuanto es el porcentaje de la final: ";
	cin>>porFinal;
	
	c1=(primer*por1)/100;
	c2=(segundo*por2)/100;
	finalEv=(evaluacionFinal*porFinal)/100;
	cout<<"por1: "<<c1<<"\n";
	cout<<"por2: "<<c2<<"\n";
	cout<<"porF: "<<finalEv<<"\n";                           
	                            
	                
	return 0;                   
}