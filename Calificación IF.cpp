#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cal;
	cout<<"dime una calificación\n";
	cin>>cal;
	if(cal>=70)
	   cout<<"Aprovaste\n";
	system("cls");
	system("pause");
	cout<<"Dime otra calificación: ";
	cin>>cal;
	if(cal>=70)
	   cout<<"Suficiente\n";
	else
	   cout<<"No suficiente\n";
	system("pause");
	system("cls");
	//LO MISMO CON ?
	cout<<"Dime una calificación: (evaludado con ?) ";
	cin>>cal;
	cal<=70?cout<<"Suficiente\n":cout<<"No suficiente\n";
	//IF CON MAS DE UNA INSTRUCCIÓN
	cout<<"Dime una clificación: ";
	cin>>cal;
	if(cal>=70){
		printf("La calificación obtenida es: ");
		cout<<"Suficiente\n";
	}
	else
	{
		printf("La calificacion obtenida es: ");
		cout<<"No suficiente\n";
	}
	
	return 0;
}