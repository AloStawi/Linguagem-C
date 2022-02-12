#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int entrar(int x)
{
	printf ("Insira o número que deseja: ");
	scanf ("%d", &x);
	return (x);
}

int fibonacci(int x)
{
	int a, b, aux, i, n, num;
	
	a = 0;
	b=1;
	num=x;
	
	printf ("%d\n", b);
	
	for(i = 0; i < num; i=i+1)
	{
		aux = a + b;
		a = b;
		b = aux;
		
		printf("%d\n", aux);
	}
}

int main ()
{
	int a, b, i, n, num, aux;
	setlocale (LC_ALL, "portuguese");
	printf ("Série de Finonacci.\n");
	
	num=entrar(num);
	fibonacci(num);
}
