#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main(){
	int numeros[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"ingrese los numeros: ";
			cin>>numeros[i][j];
		}
	}
	cout<<"\n su matriz es ";
	for(i=0;i<3;i++){
		cout<<"\n";
		for(j=0;j<3;j++){
			printf("%6d",numeros[i][j]);	
		}
	}
	cout<<"\n\n La diagonal de la matriz es ";
	for(i=0;i<3;i++){
		cout<<"\n\n";
		for(j=0;j<3;j++){
			if(j==i){
				printf("%6d",numeros[i][j]);
			}
			else
			printf("  ");
		}
	}
	cout<<"\n";
	getch();
	return 0;
}
