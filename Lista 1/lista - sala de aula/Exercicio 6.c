#include<stdio.h>
#include<conio.h>

int main ()

{	float P, V, TX, TP;
	
	printf("Entre com o valor de V");
	scanf("%f", &V);
	printf("Entre com o valor de TX");
	scanf("%f", &TX);
	printf("Entre com o valor de TP");
	scanf("%f", &TP);
	P= V+(V*(TX/100)*TP);
	printf("O valor de P: %f", P);
	
	getch();
	return 0;
}
