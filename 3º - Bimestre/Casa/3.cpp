#include <stdio.h>
#include <conio.h>
int main ()
{
int x, y;
y=1;
x=2;
while ((x<=20) || (y<=20))
{
printf ("Impar:%d\n Par:%d\n", y, x);
y=y+2;
x=x+2;
}
return 0;
}
