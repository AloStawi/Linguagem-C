#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int a[40], b[40];
	int pesq, i, x, y, w, z, acha, opc;
	w=1;
	printf ("Insira 40 notas: ");
	for (i=0; i<=39; i++)
	{
		scanf ("%d", &a[i]);
	}
	for (i=0; i<=39; i++)
	for (y=i+1; y<=39; y++)
	{
		if (a[i] > a [y])
		{
			z=a[i];
			a[i]=a[y];
			a[y]=z;
		}
	}
	printf ("\nOs valores em ordem crescente são: ");
	for (i=0; i<=39; i++)
	{
		printf ("Valor [%d]: %d\n", w++, a[i]);
	}
	printf ("\n\nDeseja fazer ujma pesquisa?\n");
	printf ("1-Não.\n2-Sim.");
	scanf ("%d", &opc);
	if (opc == 1)
	{
		getch ();
		return 0;
	}
	if (opc == 2)
	{
		printf ("\nInsira  o numero que deseja pesquisar: ");
		fflush(stdin); scanf ("%d", &pesq);
		acha=0;
		for (i=0; i<=39; i++)
		{
			if (opc == a[i])
			{
				acha=1; break;
			}
			}
			if (acha ==1)
			{
				printf ("\n\nO seu numero [%d] foi encontrado.\nNa posição: %d", pesq, i);
			}
			if (acha==0)
			{
				printf ("Numero não encontrado.");
			}
		}
	getch ();
	return 0;
}
