#include<stdio.h>
#include<conio.h>

int main()
{
	int C, A[5], B[5], c[5];
	for (C=0; C<=4; ++C)
	{
		printf ("Valor da variavel A: ");
		scanf ("%d", &A[C]);
	}
	for (C=0; C<=4; ++C)
	{
		printf ("Valor da variavel B: ");
		scanf ("%d", &B[C]);
	}
	printf ("\n---------------\n\n");
	for (C=0; C<=4; ++C)
	{
		c[C]=A[C];
		printf ("Numero da A: %d\n", c[C]);
		c[C]=B[C];
		printf ("Numero da B: %d\n", c[C]);
	}
	
	getch ();
	return 0;
	
}
