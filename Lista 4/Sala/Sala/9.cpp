#include <stdio.h>
#include <conio.h>

int main () 
{
	int x;
	printf ("\t\t\t\t\tSelecione um numero de 1 a 5.\n");
	printf ("Curso: ");
	scanf ("%d", &x);
	printf ("Seu curso eh: ");
	switch (x) {
        case 1:
             printf ("Engenharia"); break;
        case 2:
            printf ("Edificacoes"); break;
        case 3:
            printf ("Sistemas eletricos"); break;
        case 4:
            printf ("Turismo"); break;
        case 5:
            printf ("Analise de sistemas"); break;
        default:
        	printf ("xxxx\n\nInsira um  numero valido.");
}
	getch();
	return 0;
}
 

