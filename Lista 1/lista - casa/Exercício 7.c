#include<stdio.h>
#include<conio.h>

int main()

{
	float Volume, Area, raio;
	
	printf("Entre com o raio");
	scanf("%f", &raio);
	Volume= (4*3.14*raio*raio*raio)/3;
	Area= 4*3.14*raio*raio;
	printf("O valor do Volume e da Area: %f, %f", Volume, Area);
	
	getch();
	return 0;
}
