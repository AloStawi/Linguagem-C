#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int cadastro();
int pesquisa();
int classificar();
int alterar();
int aprovado();
int reprovado();

struct cad
{
	char nome[60];
	float nota;
};

int tm=20, i, j, opc, c=1;
struct cad x[20];

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	while (opc !=7)
	{
		printf ("1- Cadastro.\n2- Pesquisa.\n3- Classificar.\n4- Alterar.\n5- Aprovado.\n6- Reprovado.");
		printf ("\n\nSelecione uma das opcões para continuar: ");
		scanf ("\n%d", &opc);
		
		switch (opc)
		{
			case 1: cadastro(); break;
			case 2: pesquisa(); break;
			case 3: classificar(); break;
			case 4: alterar(); break;
			case 5: aprovado(); break;
			case 6: reprovado(); break;
		}
	} return (0);
}

int cadastro()
{
	for (i=0; i<tm; i++)
	{
		printf ("\n\nInsira o nome: ");
		fflush (stdin);
		fgets (x[i].nome, 60, stdin);
		
		printf ("Insira a nota: ");
		fflush (stdin);
		scanf ("%f", &x[i].nota);
		
	}
	
	for (i=0; i<tm; i++)
	{
		printf ("\nCadastro número %d: \n", c++);
		printf ("Nome: %sNota: %.2f\n\n", x[i].nome, x[i].nota);
	}
	return (0);
}

int pesquisa()
{	
	char pesq[60];
	printf ("Campo de pesquisa.\n\nInsira o nome que deseja pesquisar.\nNome: ");
	fflush (stdin);
	fgets (pesq, 60, stdin);
	
	for (i=0; i<tm; i++)
	{
		if (strcmp (pesq, x[i].nome)==0)
		{
			printf ("\n\nCadastro %d", c++);
			printf ("\nNome: %s", x[i].nome);
			printf ("Nota: %.2f\n\n", x[i].nota);
		}
	}
	return (0);
}

int classificar()
{
	float aux;
	printf ("\n\nClassificação.");

	for (i=0; i<tm; i++)
	for (j=i+1; j<tm; j++)
	{
		if ((x[i].nota, x[j].nota)<0)
		{
			aux=x[i].nota;
			x[i].nota=x[j].nota;
			x[j].nota=aux;
		}
	}
	for (i=0; i<tm; i++)
	{
		printf ("\nNome: %s", x[i].nome);
		printf ("Nota: %.2f\n\n", x[i].nota);
	}
	return (0);
}

int alterar()
{
	char alt[60];
	printf ("Campo de Alteração.\n\n");
	printf ("Insira o nome que desaja alterar.\nNome: ");
	fflush (stdin);
	fgets (alt, 60, stdin);
	
	for (i=0; i<tm; i++)
	{
			if (strcmp (alt, x[i].nome)==0)
		{
			printf ("\n\nCadastro");
			printf ("\nNome: %s", x[i].nome);
			printf ("Nota: %.2f\n\n", x[i].nota);
			
			printf ("\n\nInsira o nome: ");
			fflush (stdin);
			fgets (x[i].nome, 60, stdin);
			
			printf ("Insira a nota: ");
			fflush (stdin);
			scanf ("%f", &x[i].nota);
			
		}
	}
}

int aprovado()
{
	printf ("\n\nLista dos aprovados.");
	
	for (i=0; i<tm; i++)
	{
		if ((x[i].nota)>=7)
		{
			printf ("\nNome: %s", x[i].nome);
			printf ("Nota: %.2f\n\n", x[i].nota);		
		}
	}
	return (0);
}

int reprovado()
{
	printf ("\n\nLista dos reprovados.");
	
	for (i=0; i<tm; i++)
	{
		if ((x[i].nota)<7)
		{
			printf ("\nNome: %s", x[i].nome);
			printf ("Nota: %.2f\n\n", x[i].nota);		
		}
	}
	return (0);
}


