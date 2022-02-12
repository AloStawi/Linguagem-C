#include<stdio.h>
#include<conio.h>

int main()

{
	int A, P, a, b;
	
	printf("Entre com o valor de a");
	scanf("%d", &a);
	printf("Entre com o valor de b");
	scanf("%d", &b);
	A= (a*b);
	P= (2*a)+(2*b);
	printf("O valor de A e P: %d, %d", A, P);
	
	getch();
	return 0;
	}
