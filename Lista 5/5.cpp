#include<stdio.h>
#include<conio.h>

int main()
{
	int C, A[20], B[30], c[5];
	int w, z, y;
	w=1;
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
	}
		for (C=0; C<=11; C++)
		for (y=C+1; y<=11; y++)
		{
			if (c[C] > c[y])
			{
				z=c[C];
				c[C]=c[y];
				c[y]=z;
			}
		}
	printf ("\nA ordem crescente dos valores finais eh: \n\n");
	for (C=0; C<=11; C++)
	{
		printf ("Valor [%d]: %d\n", w++, c[C]);
	}
	
	getch ();
	return 0;
	
}
