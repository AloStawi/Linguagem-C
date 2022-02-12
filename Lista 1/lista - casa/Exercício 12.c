#include<stdio.h>
#include<conio.h>

int main()

{
	float VMedia, Tempo, Espaco;
	
	printf("Entre com o Espaco percorrido");
	scanf("%f", &Espaco);
	printf("Entre com o tempo");
	scanf("%f", &Tempo);
	VMedia= Espaco/Tempo;
	printf("A Velocidade Media do veículo eh: %f", VMedia);
	
	getch();
	return 0;
}
