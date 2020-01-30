#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void ingresardatos();
void sueldovacaciones(float salariomensual , float salariovacacion);
void sueldohorasextras(float salariomensual , float horas);
void amonestacion(float salariomensual , float descuento);
float salariomensual ,salariomensualdescontado, salariovacacion,horasextras,horas, descuento;
int main (){
	ingresardatos();
	sueldovacaciones(salariomensual , salariovacacion);
	sueldohorasextras( salariomensual ,  horasextras);
	amonestacion(salariomensualdescontado , descuento);
	getch ();
	return 0;
}
void ingresardatos(){
cout<<" \t \t mostrando resultado literal a "<<endl;
cout<<"ingrese su sueldo mensual : "<<endl;  
cin>>salariomensual;
cout<<"ingrese su sueldo vacacional : "<<endl;  
cin>>salariovacacion;
}
void sueldovacaciones(float salariomensual , float salariovacacion){
float fsueldovacacional = salariomensual+salariovacacion;
cout<<"su sueldo vacacional es : "<<fsueldovacacional<<endl<<endl<<endl<<endl;		
}
void sueldohorasextras(float salariomensual , float horasextras){
cout<<" \t \t mostrando resultado literal b "<<endl;
cout<<"ingrese salario mensual : "<<endl;  cin>>salariomensual;
cout<<"ingrese el numero de horas : "<<endl; cin>>horas;
if (horas>40){
		float fhorasextras= salariomensual+(horas-40)*10.50;
		cout<<"su salario extra por trabajar mas horas es "<<fhorasextras<<endl;	
	}
	else {
		cout<<"no tiene pagos extras"<<endl;
	float fhorasextras=	salariomensual;
	cout<<"no tiene horas extras su salrio es el mismo :  "<<fhorasextras<<endl<<endl<<endl<<endl;
	}
}
void amonestacion(float salariomensuald , float descuento){
cout<<" \t \t mostrando resultado literal c "<<endl;
cout<<"ingrese el salario mensual : "<<endl;  cin>>salariomensual;
cout<<" ingrese el valor del descuento : "<<endl; cin>>descuento;	
float fsalariomesual=salariomensual*0.10;
cout<<" el porcentaje a desconta es : "<<fsalariomesual<<endl;
 float  fsalariomesualdescontado =  salariomensual-fsalariomesual;
cout<<"el sueldo con la amonestacion es de : "<<	fsalariomesualdescontado<<endl<<endl<<endl<<endl;	
}
