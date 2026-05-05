#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y; float z;
	for(x=1;x<=100;x++){
		cout<<x<<" , ";
	}
	cout<<"\n";system("PAUSE");
	for(x=100;x!=65;x-=5){
		z=sqrt(x);
		cout<<"La raiz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	system("PAUSE");x=10;
	for(y=10;y!=x;++y){
		cout<<y<<"Dentro del ciclo (nucna entra)\n";
	}
	cout<<y<<"Fuera del ciclo\n";system("PAUSE");
	for(x=0,y=0;x+y<10;++x){
		cout<<"Dame el valor de y: ";cin>>y;
		cout<<x<<"+"<<y<<"="<<"El ciclo continua mientras la suma sea <10\n";
	}
	cout<<x<<"+"<<y<<x+y<<"Fuera del ciclo\n";
	for(x=0;x!=123;){
		cout<<"Dame el valor de x, 123 para terminar el ciclo: ";
		cin>>x;
	}
	system("PAUSE");
	x=1;
	for(;x<=10;){
		printf("%d\n",x);
		++x;
	}
	system("PAUSE");
	cout<<"Hola mundo\n";
	for(x=0;x<1999999;x++);
	    cout<<"Hola mundo despues de unis cuantos segundos";
	return 0;
	}