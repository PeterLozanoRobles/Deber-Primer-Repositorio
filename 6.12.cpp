//6.12. Escribir una función que permita deducir si una fecha leída del teclado es válida./
#include <iostream>
#include <conio.h>
using namespace std;
int fecha(int d,int m,int y){
 bool bisiesto = false;
 //comprobamos si el año es bisiesto
 if(y%4==0 && y%100!=100 || y%400==0)
        bisiesto = true;
    //comprobamos que los datos ingresados esten en un rango valido
    if(d>0 && d<32 && m>0 && m<13 && y>0){
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {cout << "\nFecha valida\n";}else{
if(m==2 && d<30 && bisiesto)
cout << "\nFecha valida\n";
else if(m==2 && d<29 && !bisiesto)
cout << "\nFecha valida\n";
else if(m!=2 && d<31)
cout << "\nFecha valida\n";
else
cout << "\nFecha no valida\n";}}
else
cout << "\nFecha no valida\n";fflush(stdin);
}
int main()
{
 int dia=0,mes=0,anio=0;
cout << "Introduce el dia: ";
 cin >> dia;
 cout << "Introduce el mes: ";
 cin >> mes;
 cout << "Introduce el año: ";
 cin >> anio;
 cout<<fecha(dia,mes,anio);
 getch();
 return 0;
}
