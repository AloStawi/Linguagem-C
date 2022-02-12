#include<stdio.h>
#include<conio.h>

int main()
{
	int C, A[20], B[30], c[5];
	for (C=0; C<=19; ++C)
	{
		printf ("Valor da variavel A: ");
		scanf ("%d", &A[C]);
	}
	for (C=0; C<=29; ++C)
	{
		printf ("Valor da variavel B: ");
		scanf ("%d", &B[C]);
	}
	printf ("\n---------------\n\n");
	for (C=0; C<=50; ++C)
	{
		c[C]=A[C];
		printf ("Numero da A: %d\n", c[C]);
		c[C]=B[C];
		printf ("Numero da B: %d\n", c[C]);
	}
	
	getch ();
	return 0;
	
}
