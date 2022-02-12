#include <stdio.h>
#include <conio.h>
int main ()
{
int x, y;
for (x=1; x<=20; x=x+2)
{
	printf ("Impar: %d\n", x);
}
printf ("==========\n");
for (y=2; y<=20; y=y+2)
{
printf ("Par:%d\n", y);
}
return 0;
}
