#include <iostream>
#include <conio.h>
using namespace std; 
int main(){
	int a,b,r;
	do{
		cout<<"Ingrese dos numeros mientras el primero sea mayor de 10 para resolver una suma: "<<endl;	
		cin>>a;
		cin>>b;	
	
	}while(a<10);
		r=a+b;
		cout<<"Su suma es: "<<r<<endl;
	getch();
	return 0;
}
