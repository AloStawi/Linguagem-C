#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int a[12], b[12], c[12], j, i;

int valor1()
{
	for (i=0; i<=11; i++)
	{
		printf ("Número da Matriz 1: ");
		scanf ("%d", &a[i]);
	}
}

int valor2()
{	
	for (i=0; i<=11; i++)
	{
		printf ("Número da Matriz 2: ");
		scanf ("%d", &b[i]);
	}
}

int crescente1()
{
	int aux;
	for (i=0; i<=11; ++i)
	for (j=i+1; j<=11; ++j)
	{
		aux=a[i];
		a[i]=a[j];
		a[j]=aux;
	}
	
	printf ("Valores em ordem crescente primeira Matriz: \n");
	for (i=0; i<=11; i++)
	{
		printf ("%d\n", a[i]);
	}
}

int crescente2()
{
	int aux2, j2;
	
	for (i=0; i<=11; ++i)
	for (j2=i+1; j2<=11; ++j2)
	{
		aux2=b[i];
		b[i]=b[j];
		b[j]=aux2;
	}
	printf ("Valores em ordem crescente segunda Matriz: \n");
	for (i=0; i<=11; i++)
	{
		printf ("%d\n", b[i]);
	}
}

int juntar()
{
	for (i=0; i<=11; i++)
	{
		c[i]= a[i]+b[i];
		printf ("Junção: %d", c[i]);
	}
	
}


int main ()
{
	int opc;
	setlocale (LC_ALL, "portuguese");
	valor1();
	valor2();
	crescente1();
	crescente2();
	juntar();
}

