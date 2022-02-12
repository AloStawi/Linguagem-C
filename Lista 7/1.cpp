#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
setlocale(LC_ALL, "Portuguese");
    printf ("\t\t\tCadastro e pesquisa de Agenda de endereços.");
    int opc=0, i, j, c=1, num, aux;
    struct cad
    {
           char nome [60];
           int idade;
           char endere [200];
           char tel [13];
    };
    struct cad x[5];
    {
    
    while (opc!=5)
        {
        printf ("\n\n\n\t\t\tSelecione uma das opções para continuar.\n\n");
      
   //Começo do menu//
        printf ("\t\t\t    ___________---Menu---___________\n");
        printf ("\t\t\t   |   1. Cadastro e Registro\t    |\n");
        printf ("\t\t\t   |   2. Pesquisa de registro\t    |\n");
        printf ("\t\t\t   |   3. Classificação alfabética  |\n");
        printf ("\t\t\t   |   4. Alteração de registro     |\n");
        printf ("\t\t\t   |   5. Sair\t\t\t    |\n");
        printf ("\t\t\t    ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ");
        printf ("\n\nOpção: ");
        //Fim do menu//
    
        scanf ("%d", &opc);
        switch (opc) 
        {
        //inicio do cadastro
        case 1:
        printf ("\n--------------------------------------\n\n");
        printf ("\nEsta é a seção de cadastro e registro.");
        printf ("\nDê suas especificações.\n\n");
        for (i=0; i<=4; i++)
        {
        printf ("\nInsira o nome: ");
        fflush (stdin);
        fgets (x[i].nome,60, stdin);
        fflush (stdin);
        printf ("Insira a idade: ");
        fflush (stdin);
        scanf ("%d", &x[i].idade);	
        fflush (stdin);
        printf ("Insira o endereço: ");
        fgets (x[i].endere,200, stdin);
        fflush (stdin);
        printf ("Insira seu telefone: ");
        fgets (x[i].tel, 13, stdin);
        fflush (stdin);
       	printf ("\nCadastro %d", c++);
       	printf ("\nNome: %s", x[i].nome);
       	printf ("Idade: %d", x[i].idade);
       	printf ("\nEndereço: %s", x[i].endere);
       	printf ("Telefone: %s", x[i].tel);
       	//Fim do cadastro
        }break;
        
        //inicio da Pesquisa
        case 2:
        printf ("\n--------------------------------------\n\n");
        char pesq[13];
       	printf ("\n\nEste é o campo de perquisa.\nInsira o telefone do cadastro para pesquisar.");
       	printf ("\nTelefone: ");
       	fflush (stdin);
        fgets (pesq,13, stdin);
       	for (i=0; i<=4; i++)
       	{
       	if (strcmp (pesq, x[i].tel)==0)
       	{
       	printf ("\n\nSeu cadastro é:");
       	printf ("\nNome: %s", x[i].nome);
       	printf ("Idade: %d", x[i].idade);
       	printf ("\nEndereço: %s", x[i].endere);
       	printf ("Telefone: %s", x[i].tel);
}
//Fim da Pequisa

}break;

//Organização Alfabética
case 3:
printf ("\n--------------------------------------\n\n");
char aux [100];
printf ("\n\nAqui está a lista em ordem alfabética dos cadastros.\n\n");
for (i=0; i<=4; i++)
for (j=i+1; j<=4; j++)
{
if (strcmp (x[i].nome, x[j].nome)>0)
{
strcpy (aux, x[i].nome);
strcpy (x[i].nome, x[j].nome);
strcpy (x[j].nome, aux);	
} 
}
for (i=0; i<=4; i++)
{
printf ("Nome: %s", x[i].nome);
}

break;
//Alterações de cadastro
case 4:
printf ("\n--------------------------------------\n\n");
char alt[13];
printf ("\n\nEste é o campo de alteração de cadastro.\nInsira o telefone do cadastro que deseja ser alterado.");
printf ("\nTelefone: ");
fflush (stdin);
        fgets (alt,13, stdin);
       	for (i=0; i<=4; i++)
       	{
       	if (strcmp (alt, x[i].tel)==0)
       	{
       	printf ("\n\nO cadastro é:");
       	printf ("\nNome: %s", x[i].nome);
       	printf ("Idade: %d", x[i].idade);
       	printf ("\nEndereço: %s", x[i].endere);
       	printf ("Telefone: %s", x[i].tel);
       	printf ("\n\nFaça as alterações que desejar.\n\n");
       	printf ("\nInsira o nome: ");
       	fflush (stdin);
       	fgets (x[i].nome,60, stdin);
       	fflush (stdin);
       	printf ("Insira a idade: ");
       	fflush (stdin);
       	scanf ("%d", &x[i].idade);	
       	fflush (stdin);
       	printf ("Insira o endereço: ");
       	fgets (x[i].endere,200, stdin);
       	fflush (stdin);
       	printf ("Insira seu telefone: ");
       	fgets (x[i].tel, 13, stdin);
       	fflush (stdin);
       	printf ("\nCadastro %d", c++);
       	printf ("\nNome: %s", x[i].nome);
       	printf ("Idade: %d", x[i].idade);
       	printf ("\nEndereço: %s", x[i].endere);
       	printf ("Telefone: %s", x[i].tel);
}
//Fim das alterações de cadastro
}break;

        }
        
   	}
    }
    getch ();
    return 0;
}
