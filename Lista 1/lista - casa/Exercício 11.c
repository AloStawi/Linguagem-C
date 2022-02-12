#include<stdio.h>
#include<conio.h>

int main()

{
	int A, B;
	
	printf("Entre com o valor de A");
	scanf("%d", &A);
	printf("Entre com o valor de B");
	scanf("%d", &B);
	A= A+B;
	B= A-B;
	A= A-B;
	printf("O valor de A e B trocados: %d, %d", A, B);
	
	getch();
	return 0;
}
