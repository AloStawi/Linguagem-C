#include<stdio.h>
#include<conio.h>

int main()

{
	int A, B, C;
	
	printf("Entre com o valor de A");
	scanf("%d", &A);
	printf("Entre com o valor de B");
	scanf("%d", &B);
	printf("Entre com o valor de C");
	scanf("%d", &C);
	C= A;
	A= B;
	B= C;
	printf("O valor de A e B trocados: %d, %d", A, B);
	
	getch();
	return 0;
}
