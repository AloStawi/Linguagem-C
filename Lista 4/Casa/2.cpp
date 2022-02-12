#include <stdio.h>
#include <conio.h>

int main () 
{
	int raa[9], ran[9], x;
	printf ("Insira seu RAV: \n");
	for  (x=0; x<=8; x++)
	{
		scanf ("%d", &ran[x]);
	}	
	
		raa[0]=ran[0];
		raa[1]=ran[1];
		raa[2]=ran[2];
		raa[3]=ran[3];
		raa[4]=ran[4];
		raa[5]=ran[8];
		raa[6]=ran[7];
		raa[7]=ran[6];
		raa[8]=ran[5];
		
	printf ("Seu novo RA eh: ");
	for  (x=0; x<=8; x++)
	{
	printf ("%d", raa[x]);
	}
	getch();
	return 0;
}
 
