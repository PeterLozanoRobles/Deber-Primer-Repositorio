//Serie fibonacci con Recursividad y Funciones.
#include<stdio.h>
#include<conio.h>
int fibbonacci(int n);
int main(){
int numero,i;
printf("Ingrese el numero de elementos :");
scanf("%i",&numero);     
	for(i=1;i<=numero;i++){
    printf("%i , ", fibbonacci(i));
    }	
    getch();
    return 0;
}
int fibbonacci(int n){
    if(n==0 || n==1){
    return n;
}
    else{
    return (fibbonacci(n-1)+fibbonacci(n-2));	
}
}

     
     


