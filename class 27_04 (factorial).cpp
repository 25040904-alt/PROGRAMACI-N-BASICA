#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int x;
    int factorial;
    cout<<"Dime un número para calcular su factorial: ";
    cin>>factorial;
    if(factorial<0){
        cout<<"No hay factorial para valores negativos";
    }
    else if(factorial==0){
        cout<<"0!=1";
    }
    else if(factorial==1){
        cout<<"1!=1";
    }
    else{
        cout<<factorial<<"!="<<factorial;
        for (x=factorial-1;x>=1;x--){ //x=x-1;
            cout<<" X "<<x;
            factorial=factorial*x;
        }
        cout<<"="<<factorial;
    }
    return 0;
}
//Angel Leonardo Reza Casares 25040904