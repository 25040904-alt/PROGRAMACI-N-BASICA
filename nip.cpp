#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;
	int intento=0;
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==123){  //Con los dos"==" se compara, y con solo un "=" asignas valor
		printf("**Correcto**\n");
		cout<<"Acceso concedido\n";
	}
	else{
		cout<<"**Denegado**\n";
		cout<<"Acceso Denegado\n";
	}
	
	
	return 0;
}