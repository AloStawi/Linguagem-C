#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int matrizA [20], matrizB [20];
	int x, pesq, y, z, w, j, acha;
	w=1;
	printf ("Insira 20 numeros: ");
	for (x=0; x<=19; x++)
	{
		scanf ("%d", &matrizA [x]);
	}
	for (x=0; x<=19; x++)
	{
		matrizB [x]=matrizA[x]+2;
	}
	printf ("\nOs valores acrecentados 2 sao:\n\n");
	for (x=0; x<=19; x++)
	{
		printf ("Valor [%d]: %d\n", w++, matrizB [x]);
	}
	for (x=0; x<=19; x++)
		for (y=0; y<=19; y++)
		{
			if (matrizB [x] < matrizB [y])
			{
				z=matrizB [x];
				matrizB [x]=matrizB [y];
				matrizB [y]=z;
			} 
		}
		w=1;
	printf ("\nA ordem crescente ?:\n ");
	for (x=0; x<=19; x++)
	{
		printf ("\nValor [%d]: %d", w++, matrizB [x]);
	}
	printf("\n\nDeseja fazer uma pesquisa?\n1-Sim 2-Nao\n");
	scanf("%d", &j);
	if (j == 2)
	{
		getch();
		return 0;
	}
	if (j == 1)
	{
		printf("\nInsira o numero:");
		fflush(stdin); scanf("%d", &pesq);
		acha=0;
		
		for(x=0;x<=7; ++x)
		{
		if (pesq == matrizB [x])
		{
			acha = 1;break;
		}
		}
		if(acha == 1)
		{
			printf("O seu numero [%d] foi encontrado na posicao: %d", pesq, x );
		}
		if (acha == 0)
		{
			printf("Numero n?o encontrado");
		}
	}
	
	getch();
	return 0;
}
	
