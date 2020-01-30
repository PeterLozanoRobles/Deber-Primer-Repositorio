#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	int numeros[3][3],i,j;
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
		cout<<"Ingrese numeros: ";
		cin>>numeros[i][j];	
        }
	    }
	    cout<<"\n    MATRIZ ";
	    for(i=0;i<3;i++)
	{
			cout<<"\n";
		for(j=0;j<3;j++)
	{
		printf("%6d",numeros[i][j]);	
	}
	}
cout<<"\n";	
		getch();
		return 0;
}
