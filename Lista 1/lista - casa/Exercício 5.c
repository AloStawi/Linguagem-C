#include<stdio.h>
#include<conio.h>

int main()


{
	float h, m, IMC;
	
	printf("Entre com o valor de h");
	scanf("%f", &h);
	printf("Entre com o valor de m");
	scanf("%f", &m);
	IMC= m/ h**2;
	printf("O valor de IMC: %f", IMC);
	
	getch();
	return 0;
}
