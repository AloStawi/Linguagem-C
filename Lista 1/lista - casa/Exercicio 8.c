#include<stdio.h>
#include<conio.h>

int main()

{
	float N1, N2, N3, N4, MF;
	
	printf("Entre com o valor de N1");
	scanf("%f", &N1);
	printf("Entre com o valor de N2");
	scanf("%f", &N2);
	printf("Entre com o valor de N3");
	scanf("%f", &N3);
	printf("Entre com o valor de N4");
	scanf("%f", &N4);
	MF= (N1+N2+N3+N4)/4;
	printf("A Média final: %f", MF);
	
	getch();
	return 0;
}
