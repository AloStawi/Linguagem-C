#include<stdio.h>
#include<conio.h>

int main()
{
	int a[7], b[7], c[7][2], i, j;
	printf ("\t\tElementos da matriz C\n\n");
	printf("Entre com 7 valores para A:\n\n");
	for (i=0; i<=6; i++)
	{
		scanf ("%d", &a[i]);
	}
	printf ("Entre com os valores de B:\n\n");
	for (i=0; i<=6; ++i)
	{
		scanf ("%d", &b[i]);
	}
	for (i=0; i<=6; ++i)
		for (j=1; j<=1; ++j)
		{
			c[i][j]=a[i];
		
		}
		for (i=0; i<=6; ++i)
		for (j=2; j<=2; ++j)
		{
			c[i][j]=b[i];
		
		}
			for (i=0; i<=6; ++i)
			for (j=1; j<=2; ++j)
			{
			printf ("\n%d", c[i][j]);
			}
			
	    getch();
		return 0;	
}
