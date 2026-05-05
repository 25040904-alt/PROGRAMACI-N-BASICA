#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x=1;
	string clave;
	for(x=1;x<4;x++)
	{
		printf("Dame tu pasword sin espaciosen blanco (intento #%d) ",x);
		cin>>clave;
		if(clave=="soloyolose")
		    break;
	}
	if(x==4)
	    puts("\asuario no autorizado");
	else
	    printf("bienvenido al intento #%d",x);
	return 0;
}
//Angel Leonardo Reza Casares 25040904