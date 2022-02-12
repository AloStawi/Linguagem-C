#include <stdio.h>
#include <conio.h>
#include  <math.h>

int main()
{
	int b,e, r;
	printf ("\tEnsira dois valores, para base e expoente.\n");
	printf ("\nBase: ");
	scanf ("%d", &b);
	printf ("Expoente: ");
	scanf ("%d", &e);
	r=pow(b, e);
	printf ("Resultado: %2.d", r);
	return 0;
}
