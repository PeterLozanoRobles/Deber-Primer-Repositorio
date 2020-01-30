#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
//prototipo de la funcion
int encontrarmayor(int x, int y);
int main (){
int n1,n2;
int mayor;
printf ("Ingrese 2 numeros: \n");
scanf("%d %d",&n1,&n2);
mayor=encontrarmayor(n1,n2);
printf ("El mayor es: %i \n",mayor);
getch ();
return 0;
}
// funcion mayor
int encontrarmayor(int x, int y){
int numeromayor;
if (x>y){
	numeromayor=x;
}
	else {
	numeromayor=y;
	}
	return numeromayor;
}
