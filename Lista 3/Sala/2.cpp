#include <stdio.h>
#include <conio.h>
int main ()
{
	int x,y;
	x=0;
	y=0;
	while (y<=100) {
		printf ("%d\n", x);
		y=y+1;
		x=y+x;
	}
	getch ();
	return 0;
}
