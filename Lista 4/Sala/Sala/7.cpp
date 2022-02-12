#include <stdio.h>
#include <conio.h>

int main () 
{
	int a[10], b[10], c, d;
	d=0;
	printf ("\t\t\t\tInsira 10 numeros.\n\n");
		scanf ("%d", &a[c]);
	for (c=0; c<=9; c++)
	{
	scanf ("%d", &a[c]);
	}
	for (c=9; c>=0; c--)
	{
		b[c]=a[c];
		printf ("Valor invertido: %d\n", b[c]);	
	}	
	getch();
	return 0;
}
