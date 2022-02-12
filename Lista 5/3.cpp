#include <stdio.h>
#include <conio.h>

int main ()
{
int a[15], b[15];
int w, x, y, z;
w=1;
printf ("Insira 15 numeros para A:\n");
for (x=0; x<=14; x++)
{
scanf ("%d", &a[x]);
}
for (x=0; x<=14; x++)
for (y=x+1; y<=14; y++)
{
if (a[x] > a[y])
{
z=a[x];
a[x]=a[y];
a[y]=z;
}
}
printf ("\nA ordem crescente de A eh: \n\n");
for (x=0; x<=14; x++)
{
printf ("Valor [%d]: %d\n", w++, a[x]);
}
w=1;

for (x=0; x<=14; x++)
{

for (b[x]=1; a[x]>1; a[x]--)
{
b[x]=b[x]*a[x];
}
printf ("Valores fatorados: %d\n", b[x]);
}
printf ("\nA ordem crescente dos valores finais eh: \n\n");
for (x=0; x<=14; x++)
for (y=x+1; y<=14; y++)
{
if (b[x] > b[y])
{
z=b[x];
b[x]=b[y];
b[y]=z;
}
}
for (x=0; x<=14; x++)
{
printf ("Valor [%d]: %d\n", w++, b[x]);
}
getch ();
return 0;
}


