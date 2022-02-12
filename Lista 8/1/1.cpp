#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int cadastro();
int pesquisa(); 
int alterar();
int ordenar();
int remover();

	struct cad 
	{
		char nome[60];
		char endere[60];
		char tel[13];
		char email[200];
	};
int i, j, opc, c, tm=2;
struct cad x[5];

int main ()
{   
		while (opc!=6)
		{
			printf ("Insira a op��o que desejar: ");
			printf ("1- Cadastro.\n2- Pesquisa.\n3- Ordenar.\n4- Alterar.\n 5- Remover.\n 6- Sair");
			scanf ("%d", &opc);
			
			switch (opc)
			{
				case 1: cadastro(); break;
				case 2: pesquisa(); break;
				case 3: ordenar(); break;
				case 4: alterar(); break;
				case 5: remover(); break;
			};
		}

		 return (0);
	}
		
		int cadastro()
		{
				printf ("\nEsta � a se��o de cadastro e registro.");
		        printf ("\nD� suas especifica��es.\n\n");
		        for (i=0; i<=tm; i++)
		        {
			        printf ("\nInsira o nome: ");
			        fflush (stdin);
			        fgets (x[i].nome,60, stdin);
			        fflush (stdin);
			        printf ("Insira o eamil: ");
			        fflush (stdin);
			        fgets (x[i].email, 200, stdin);	
			        fflush (stdin);
			        printf ("Insira o endere�o: ");
			        fgets (x[i].endere,200, stdin);
			        fflush (stdin);
			        printf ("Insira seu telefone: ");
			        fgets (x[i].tel, 13, stdin);
			        fflush (stdin);
			       	printf ("\nCadastro %d", c++);
			       	printf ("\nNome: %s", x[i].nome);
			       	printf ("Email: %s", x[i].email);
			       	printf ("\nEndere�o: %s", x[i].endere);
			       	printf ("Telefone: %s", x[i].tel);
		        }
	        return (0);
		}
		
		int pesquisa()
		{		
				char pesq[13];
		       	printf ("\n\nEste � o campo de perquisa.\nInsira o telefone do cadastro para pesquisar.");
		       	printf ("\nTelefone: ");
		       	fflush (stdin);
		        fgets (pesq,13, stdin);
		       	for (i=0; i<=tm; i++)
	       		{
			       	if (strcmp (pesq, x[i].tel)==0)
			       	{
				       	printf ("\n\nSeu cadastro �:");
				       	printf ("\nNome: %s", x[i].nome);
				       	printf ("Idade: %s", x[i].email);
				       	printf ("\nEndere�o: %s", x[i].endere);
				       	printf ("Telefone: %s", x[i].tel);
					}
				} return (0);
		} 
		
		int alterar()
		{

				char alt[13];
				printf ("\n\nEste � o campo de altera��o de cadastro.\nInsira o telefone do cadastro que deseja ser alterado.");
				printf ("\nTelefone: ");
				fflush (stdin);
		        fgets (alt,13, stdin);
		       	for (i=0; i<=tm; i++)
		       	{
			       	if (strcmp (alt, x[i].tel)==0)
			       	{
				       	printf ("\n\nO cadastro �:");
				       	printf ("\nNome: %s", x[i].nome);
				       	printf ("Email: %s", x[i].email);
				       	printf ("\nEndere�o: %s", x[i].endere);
				       	printf ("Telefone: %s", x[i].tel);
				       	printf ("\n\nFa�a as altera��es que deseja.\n\n");
				       	printf ("\nInsira o nome: ");
				       	fflush (stdin);
				       	fgets (x[i].nome,60, stdin);
				       	fflush (stdin);
				       	printf ("Insira o Email: ");
				       	fflush (stdin);
				       	fgets (x[i].email,200, stdin);	
				       	fflush (stdin);
				       	printf ("Insira o endere�o: ");
				       	fgets (x[i].endere,200, stdin);
				       	fflush (stdin);
				       	printf ("Insira seu telefone: ");
				       	fgets (x[i].tel, 13, stdin);
				       	fflush (stdin);
				       	printf ("\nCadastro %d", c++);
				       	printf ("\nNome: %s", x[i].nome);
				       	printf ("Email: %s", x[i].email);
				       	printf ("\nEndere�o: %s", x[i].endere);
				       	printf ("Telefone: %s", x[i].tel);
					}
			
				}
			return (0);
		}
		
		int ordenar()
		{
	
				char aux [100];
				printf ("\n\nAqui est� a lista em ordem alfab�tica dos cadastros.\n\n");
				for (i=0; i<=tm; i++)
				for (j=i+1; j<=tm; j++)
				{
					if (strcmp (x[i].nome, x[j].nome)>0)
					{
						strcpy (aux, x[i].nome);
						strcpy (x[i].nome, x[j].nome);
						strcpy (x[j].nome, aux);	
					} 
				}
				for (i=0; i<=tm; i++)
					{
					printf ("Nome: %s", x[i].nome);
					}
				
			return (0);
		}
		
		int remover()
		{
			char remo[13];
				printf ("\n\nEste � o campo de remo��o de cadastro.\nInsira o telefone do cadastro que deseja ser alterado.");
				printf ("\nTelefone: ");
				fflush (stdin);
		        fgets (remo,13, stdin);
		       	for (i=0; i<=tm; i++)
		       	{
			       	if (strcmp (remo, x[i].tel)==0)
			       	{
				       	printf ("\n\nO cadastro �:");
				       	printf ("\nNome: %s", x[i].nome);
				       	printf ("Email: %s", x[i].email);
				       	printf ("\nEndere�o: %s", x[i].endere);
				       	printf ("Telefone: %s", x[i].tel);
				       	printf ("\n\nFa�a as altera��es que deseja.\n\n");
				       	printf ("\nInsira o nome: ");
				       	fflush (stdin);
				       	fgets (x[i].nome,60, stdin);
				       	fflush (stdin);
				       	printf ("Insira o Email: ");
				       	fflush (stdin);
				       	fgets (x[i].email,200, stdin);	
				       	fflush (stdin);
				       	printf ("Insira o endere�o: ");
				       	fgets (x[i].endere,200, stdin);
				       	fflush (stdin);
				       	printf ("Insira seu telefone: ");
				       	fgets (x[i].tel, 13, stdin);
				       	fflush (stdin);
				       	printf ("\Aperte Enter para apagar os seguintes dados: ");
				       	printf ("\nNome: %s", x[i].nome);
				       	printf ("Email: %s", x[i].email);
				       	printf ("\nEndere�o: %s", x[i].endere);
				       	printf ("Telefone: %s", x[i].tel);
					}
			
				}
				return (0);
			}
		
		
		
