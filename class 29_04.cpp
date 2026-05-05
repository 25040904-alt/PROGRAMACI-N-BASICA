#include<iostream>
using namespace std;
int main(){
	int i=0; int j=1; int y;
	char c;
	cout<<i<<"\n";
	cout<<j<<"\n";
	y=0;
	do{
		y=i+j;
		cout<<y<<"\n";
		i=j;
		j=y;//esta es la clave
		cout<<"Presiona c para continuar generando, t para terminar ";
		cin>>c;
	}while(c!='t');
	return 0;
}//Angel Leonardo Reza Casares 25040904