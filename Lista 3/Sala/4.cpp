#include <stdio.h>
#include <conio.h>
#include  <math.h>

int main()
{
	int x, n;
	printf ("Insira um numero menor ou igual a 50: ");
	scanf ("%d", &n);
	for (x=3; n<250; n=n*x) 
	{
	printf ("%d\n",n);
}
getch();
return 0;
}
