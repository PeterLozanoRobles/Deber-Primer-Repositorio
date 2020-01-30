#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,x,y;
	float r;
	cout<<"Ingrese cualquier numero entero de 1 hasta 4"<<endl;
	cin>>a;
	if(a==1){
		cout<<"Usted va a realizar una suma"<<endl;
		cout<<"Ingrese dos numeros: "<<endl;
		cin>>x>>y;
		r=x+y;
		cout<<"Su suma es: "<<r;
	}else if(a==2){
		cout<<"Usted va a realizar una resta"<<endl;
		cout<<"Ingrese dos numeros: "<<endl;
		cin>>x>>y;
		r=x-y;
		cout<<"Su resta es: "<<r;
	}else if(a==3){
		cout<<"Usted va a realizar una multiplicacion"<<endl;
		cout<<"Ingrese dos numeros: "<<endl;
		cin>>x>>y;
		r=x*y;
		cout<<"Su multiplicacion es: "<<r;
	}else if(a==4){
		cout<<"Usted va a realizar una division"<<endl;
		cout<<"Ingrese dos numeros: "<<endl;
		cin>>x>>y;
		r=x/y;
		cout<<"Su division es: "<<r;
	}else{
		cout<<"El numero ingresado no es el correcto"<<endl;
	}
	getch();
	return 0;
}
