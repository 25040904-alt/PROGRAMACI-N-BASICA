#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c;
	char letras [20]="Hexadecimal";
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';
	printf("Impresion simple\n");
	printf("La variable char tiene un valor de %c\n varint=%d\n vardfloat=%f\n cadena=%s",i,f,c,letras);
	systen("pause");
	printf("Impresion sin espacios \n");
	printf("%d%f%c%s\n",i,f,c,letras);
	printf("Impresion con etiquetas\n");
	printf("Entero: %d Floante: %f Caracter: %c Cadena: %s\n",i,f,c,letras);
	system("pause");
	printf("Dame un entero: ");
	fflush(stdin);
	scanf("%d",&i);
	puts("Dame un flotante: ");
	fflush(stdin);
	
	
	
	
}