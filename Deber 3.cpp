//Deber: Bianca Quiñonez
#include<iostream>
#include<stdlib.h>
using namespace std;
int main (int argc, char *argv[])
{
	int a[100],n=1,acum=0,i;
	cout<<"Los digitos pares menores a cien: "<<endl;
	for(int i=0;i<100;i++)
	{
		a[i]=n++;
		if (a[i]%2==0)
		{
		cout<<a[i]<<endl;
		}
	}
system("PAUSE");
return 0;
}
