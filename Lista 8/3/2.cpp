#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

Ler1(int n1)
{
	printf ("Insira seus números da primeira Matriz: ");
	scanf ("%d", &n1);
	return (n1);
}

Ler2(int n2)
{
	printf ("Insira seus números da segunda Matriz: ");
	scanf ("%d", &n2);
	return (n2);
}

Juntar(int j1)
{
	int j2;
	j2=j1;
	return (j2);
}

Exibir(int resul)
{
	printf ("Os seus números são: %d\n", resul);
}

int main()
{
	int i, j, a[30], b[30], c[60];
	for (i=0; i<=29; i++)
	{
		a[i]=Ler1(a[i]);
	}
	
	for (i=0; i<=29; i++)
	{
		b[i]=Ler2(b[i]);
	}
	
	for (i=0; i<=29; i++)
	{
		c[i]=Juntar(a[i]);
	}
	
	for (i=0; i<=29; i++)
	{
		c[i+30]=Juntar(b[i]);
	}
	
	for (i=0; i<=59; i++)
	{
		Exibir(c[i]);
	}
}
