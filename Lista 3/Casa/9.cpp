#include <stdio.h>
#include <conio.h>
int main ()
{
int x, y;
x=2;
y=1;
do
{
printf ("Impar: %d\n", y);
printf ("Par: %d\n", x);
x=x+2;
y=y+2;
}
while ((x<=20) && (y<=20));
return 0;
}
