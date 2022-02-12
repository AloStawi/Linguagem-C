#include<stdio.h>
#include<conio.h>

int main()

{
	float Real, Dolar;
	printf("Entre com o valor da variavel Real");
	scanf("%f", &Real);
	Dolar= (Real/ 2.40);
	printf("O valor em Dolar eh: %f", Dolar);
	
	getch();
	return 0;
}
