#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int entrar1(int x)
{
	printf ("\n\nEnsira dois valores, para base e expoente.\n");
	printf ("\nBase: ");
	scanf ("%d", &x);
	return (x);
}

int entrar2(int y)
{
	printf ("Expoente: ");
	scanf ("%d", &y);
	return (y);
}

int conta (int x, int y)
{
	float r;
	int b, e;
	
	b=x;
	e=y;
	
	r=pow(b, e);
	printf ("\nResultado: %.2f", r);
}

int main ()
{
	int b, e;
	float r;
	
	setlocale (LC_ALL, "portuguese");
	printf ("Conta de potencias");
	
	b=entrar1(b);
	e=entrar2(e);
	conta(b, e);
}
