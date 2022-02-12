#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int A[4], B[4], C;
	for (C=0; C<=3; C++)
	 {
		scanf ("%d", &A[C]);
		B[C]=A[C]*3;
	}
	for (C=0; C<=3; C++) 
	{
		printf ("\n%d\n", B[C]);
	}
	getch();
	return 0;
}
