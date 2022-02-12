#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int x, y;
	for (x=0; x<15; x=x+1){
		y=3;
		y=pow(y, x);
		printf ("%d\n", y);
	}
	return 0;
}
