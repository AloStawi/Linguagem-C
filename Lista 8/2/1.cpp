#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


int numerar (int z)
{
	printf ("Insira um número para contar.");
	printf ("\nNúmero: ");
	scanf ("%d", &z);
	return (z);
}

int conta(int z)
{
	int num, y=0;
	num=z;
	
	while (y<num)
	{
		z=z+y;
		y=y+1;
	}
	printf ("Resultado: %d\n\n\n", z);
}

int main ()
{
	int x;
	setlocale (LC_ALL, "Portuguese");
	x=numerar(x);
	conta(x);
}
