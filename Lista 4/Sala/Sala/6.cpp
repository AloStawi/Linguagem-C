#include<stdio.h>
#include<conio.h>

int main()
{
	int C, A[8], B[8], c[5];
	for (C=0; C<=7; ++C)
	{
		printf ("Valor da variavel A: ");
		scanf ("%d", &A[C]);
	}
	for (C=0; C<=8; ++C)
	{
		B[C]=A[C]*A[C];
				printf ("\nValor do quadrado de A eh: %.2d", B[C]);

	}
	
	getch ();
	return 0;
	
}
