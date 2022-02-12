#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int tab, cont, x;
	printf ("Entre com a tabuada:");
	scanf ("%d", &x);
	cont=1;
	do {
		tab=x*cont;
		printf ("%dX%d=%d\n", x, cont, tab);
		++cont;
	}
	while (cont <= 10);
	getch ();
	return 0;
}
