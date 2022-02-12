#include<stdio.h>
#include<conio.h>

int main()

{
	float Real, Dolar;
	
	printf("Entre com o valor da variavel Dolar");
	scanf("%f", &Dolar);
	Real= (Dolar* 2.40);
	printf("O valor em Real eh: %f", Real);
	
	getch();
	return 0;
}
