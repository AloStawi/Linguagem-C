#include <stdio.h>
#include <conio.h>
#include  <math.h>

int main()
{
	int opc;
	float n1;
	float n2;
	float result;
		printf ("[+]- Adicao\n");
		printf ("[-]- Subtracao\n");
		printf ("[*]- Multiplicacao\n");
		printf ("[/]- Divisisao\n\n");
		printf ("Selecione a opcao: ");
		scanf ("%d", &opc );
		
		switch ( opc )
		{
			case 1 :
				printf ("\nEntre com dois valores para somar\n");
				printf ("Primeiro valor: ");
				scanf ("%f", &n1 );
				printf ("Segundo valor: ");
				scanf ("%f", &n2 );
				result = n1 + n2;
				
				printf ("\n%.2f + %.2f = %.2f\n", n1, n2, result );
				break;
				
			case 2 : 
				printf ("\nEntre com dois valores para subtrair\n");
				printf ("Primeiro valor: ");
				scanf ("%f", &n1 );
				printf ("Segundo valor: ");
				scanf ("%f", &n2 );
				
				result = n1 - n2;
				
				printf ("\n%.2f - %.2f = %.2f\n", n1, n2, result );
				break;
				
			case 3 :
				
				printf ("\nEntre com dois valores para multiplicar\n");
				printf ("Primeiro valor: ");
				scanf ("%f", &n1 );
				fflush (stdin);
				printf ("Segundo valor: ");
				scanf ("%f", &n2 );
				
				result = n1 * n2;
				
				printf ("\n%.2f × %.2f = %.2f\n", n1, n2, result );
				break;
				
			case 4 :
				printf ("\nEntre com coisa valores para dividir\n");
				printf ("Primeiro valor: ");
				scanf ("%f", &n1 );
				fflush (stdin);
				printf ("Segundo valor: ");
				scanf ("%f", &n2 );
				result = n1 / n2;
				
				printf ("\n%.2f ÷ %.2f = %.2f\n", n1, n2, result );
				break;

				}
	
	return 0;
}
