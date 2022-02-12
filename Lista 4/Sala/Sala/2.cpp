#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int A[6], B[6], C, n;
	for (C=0; C<=5; C++)
	 {
	    printf ("\n\nInsira um numero: ");
		scanf ("%d", &A[C]);
		n=1;
		for (B[C]=1; B[C]<=A[C]; B[C]++)
		{
			n*=B[C];
			printf ("\n%d", n);
	 }
}
	getch();
	return 0;
}
