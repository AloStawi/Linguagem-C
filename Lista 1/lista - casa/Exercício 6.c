#include<stdio.h>
#include<conio.h>

int main()

{
	float raio, Area, Comprimento;
	
	printf("Entre com o valor de raio");
	scanf("%f", &raio);
	Area= 3.14*raio*raio;
	Comprimento= (2*3.14*raio);
	printf("O valor de Area e Comprimento: %f, %f", Area, Comprimento);
	
	getch();
	return 0;
}
