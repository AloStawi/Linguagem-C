#include<stdio.h>
#include<conio.h>

int main ()

{
	float C, NR_COELHOS;
	
	printf("Entre com o NR_COELHOS");
	scanf("%f", &NR_COELHOS);
	C= (NR_COELHOS* .70);
	printf("O resultado de C eh: %f", C);
	
	getch();
	return 0;
}
