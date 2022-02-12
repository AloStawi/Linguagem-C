#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[4], b[4], c[4][2];
	int i, j;
	printf ("Insira os valores de A: ");
	for (i=0; i<=3; i++)
	{
		scanf ("%d", &a[i]);
	}
	printf ("Insira os valores de B: ");
	for (i=0; i<=3; i++)
	{
		scanf ("%d", &b[i]);
	}
	for (i=0; i<=3; i++)
	for (j=0; j<=1; j++)
	{
		c[i][1]=a[i]*2;
	}
	for (i=0; i<=3; i++)
	for (j=1; j<=2; j++)
	{
		c[i][2]=b[i]-5;
	}
	printf ("Os valores sao: \n");
	for (i=0; i<=3; i++)
	for (j=1; j<=2; j++)
	{
		printf ("%d\n", c[i][j]);
	}
	getch ();
	return 0;
}
