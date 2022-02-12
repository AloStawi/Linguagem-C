#include<stdio.h>
#include<conio.h>

int main ()

{
	float Volume, raio, altura;
	
	printf("Entre com raio");
	scanf("%f", &raio);
	printf("Entre com altura");
	scanf("%f", &altura);
	Volume= (3.14159 * raio * raio * altura);
	printf("O valor do volume eh: %f", Volume);
	
	getch();
	return 0;
}
