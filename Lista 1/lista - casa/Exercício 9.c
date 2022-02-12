#include<stdio.h>
#include<conio.h>

int main()

{
	float P1, P2, Ativ, MediaS;
	
	printf("Entre com o valor de P1");
	scanf("%f", &P1);
	printf("Entre com o valor de P2");
	scanf("%f", &P2);
	printf("Entre com o valor de Ativ");
	scanf("%f", &Ativ);
	MediaS= (P1*4+P2*4+Ativ*2)/10;
	printf("A Média Semestral eh: %f", MediaS);

	getch ();
	return 0;
}
