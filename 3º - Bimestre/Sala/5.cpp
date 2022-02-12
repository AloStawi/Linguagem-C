#include <stdio.h>
#include <conio.h>
#include  <math.h>

int main()
{
	int x, n;
	n=4;
	for (x=1; x<=200; x=x+1){
		if (x%n==0) {

		printf ("%d\n", x);
	}	
	}
	return 0;
}
