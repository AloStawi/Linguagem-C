#include<stdio.h>
#include<conio.h>

int main ()

{	
	float dis, t, vel, litusa;
	
	printf("Entre com o t");
	scanf("%f", &t);
	printf("Entre com a vel");
	scanf("%f", &vel);
        dis = (t * vel) ;
	litusa = (dis/12);
	printf("O valor de dis, t, vel, litusa : %f, %f, %f, %f", dis, t, vel, litusa);
	
	getch();
	return 0;
}
