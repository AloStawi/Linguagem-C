#include <stdio.h>
#include <conio.h>
#include <locale.h>

	
int entrar1(float x)
{
	printf ("Insira os itens abaixo.\nValor: ");
	scanf ("%f", &x);
	return(x);
}

int entrar2(float y)
{
	printf ("\nTaxa: ");
	scanf ("%f", &y);
	return(y);
}

int entrar3(int z)
{	
	printf ("\nTempo: ");
	scanf ("%d", &z);
	return(z);
}

int conta(float x, float y, int z)
{
	int tempo;
	float prest, valor, taxa;
	
	taxa=y;
	valor=x;
	tempo=z;
	
	
	prest=valor+(valor*(taxa/100)*tempo);
	printf ("Total: %f", prest);
}

int main ()
{
	int  tempo, a;
	float valor, taxa;
	setlocale (LC_ALL, "portuguese");
	
	valor=entrar1(valor);
	taxa=entrar2(taxa);
	tempo=entrar3(tempo);
	conta(valor, taxa, tempo);
}
