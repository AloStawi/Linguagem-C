#include<stdio.h>
#include<conio.h>

int main()
{
	int n, C, A[5], B[5], c[5];
	for (C=0; C<=4; ++C)
	{
		printf ("Primeiro valor: ");
		scanf ("%d", &A[C]);
		printf ("Segundo valor: ");
		scanf ("%d", &B[C]);
		c[C]=A[C]-B[C];
		printf ("Resultado: %d\n\n", c[C]);
		printf ("------------------\n\n");
	}
	getch ();
	return 0;
	
}
