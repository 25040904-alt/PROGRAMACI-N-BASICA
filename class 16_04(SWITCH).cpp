#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int d,m,a;
	string mes;
	cout<<"Dime la fecha en formato de: ddmmaaaa";
	scanf("%2d%2d%4d",&d,&m,&a);
	cout<<d<<" de ";
	switch(m)
	{
		case 1:
			printf("Enero");
			break;
		case 2:
			printf("Febrero");
			break;
		case 3:
			printf("Marzo");
	    case 4:
			printf("abril");
		case 5:
			printf("mayo");
			break;
		case 6:
			printf("junio");
			break;
		case 7:
			printf("julio");
			break;	
		case 8:
			printf("agosto");
			break;
		case 9:
			printf("septiembre");
			break;
		case 10:
			printf("octubre");
			break;
		case 11:
			printf("noviembre");
			break;
		case 12:
			printf("diciembre");
		    break;
		default:
			printf("Mes NO Valido");
	}
	cout<<" de "<<a;
	
	return 0;
}