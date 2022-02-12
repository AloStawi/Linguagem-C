#include<stdio.h>
#include<conio.h>

int main ()

{
	int A,B,X;
	
	printf("Entre com o valor de A");
	scanf("%d", &A);
	printf("Entre com o valor de B");
	scanf("%d", &B);
	X= A;
	A= B;
	B= X;
	printf("O valor de A e B trocados: %d, %d", A, B);
	
	getch();
	return 0;
}
