#include<stdio.h>
#include<conio.h>

int main()

{
	float AA, LA, AP, LP, QA, ARP, ARA;
	
	printf("Entre com o valor da variavel AA");
	scanf("%f", &AA);
	printf("Entre com o valor da variavel LA");
	scanf("%f", &LA);
	printf("Entre com o valor da variavel AP");
	scanf("%f", &AP);
	printf("Entre com o valor da variavel LP");
	scanf("%f", &LP);
	ARP= (AP*LP);
	ARA= (AA*LA);
	QA= (ARP/ARA);
	printf("O número de azulejos eh: %f", QA);
	
	getch();
	return 0;
}
