#include <stdio.h>
#include <conio.h>

int main () 
{
	int a[10], b[10][3], c[10];
	int i, j, x, fat;
	printf ("Inira 10 numeros.\n");
	for (i=0; i<=9; i++)
	{
		scanf ("%d", &a[i]);
	}
	printf ("Coluninha 1: \n");
	for (i=0; i<=9; i++)
	for (j=1; j<=1; j++)
	{
		b[i][j]=a[i]+5;
		printf ("%d\n", b[i][j]);
		c[i]=1;
	}
	printf ("\nColuninha 2: \n");
	for (i=0; i<=9; i++)
   	for (fat=1; fat<=a[i]; fat++)
   	{
   		c[i]*=fat;
	}
	for (i=0; i<=9; ++i)
   	for (j=2; j<=2; ++j)
   	{
   		b[i][j]=c[i];
   		printf ("%d\n", b[i][j]);
   	}	
	printf ("\nColuninha 3: \n");
   	for (i=0; i<=9; ++i)
   	for (j=3; j<=3; ++j)
   	{
   		b[i][j]=a[i]*a[i];
   		printf ("%d\n", b[i][j]);		  
	}
	getch ();
	return 0;
}
