#include <stdio.h>
#include <conio.h>

int main () 
{
	int rav[9], rac[9], x;
	printf ("Insira seu RA: \n");
	for  (x=0; x<=8; x++)
	{
		scanf ("%d", &rav[x]);
	}	
	
		rac[0]=rav[1];
		rac[1]=rav[0];
		rac[2]=rav[2];
		rac[3]=rav[3];
		rac[4]=rav[4];
		rac[5]=rav[5];
		rac[6]=rav[6];
		rac[7]=rav[8];
		rac[8]=rav[7];
		
	printf ("Seu novo RA eh: ");
	for  (x=0; x<=8; x++)
	{
	printf ("%d", rac[x]);
	}
	getch();
	return 0;
}
 

