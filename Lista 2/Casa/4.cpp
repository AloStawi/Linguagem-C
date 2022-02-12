#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 float a, b, c;
 printf ("Insira tres valores: ");
 scanf ("%f %f %f", &a, &b, &c);
 if ((a>b) && (a>c) && (b>c))
 printf ("O maior valor eh A: %f\n O do meio eh B: %f\n e O menor eh C: %f", a, b, c);
    if ((a>b) && (a>c) && (c>b))
 printf ("O maior valor eh A: %.2f\nO valor do meio eh C: %.2f\nO menor valor eh B: %.2f", a, c, b);
 if ((a<b) && (a<c) && (c<b))
 printf ("O maior valor eh B: %.2f\nO valor do meio eh C: %.2f\nO menor valor eh A: %.2f", b, c, a); 
  if ((a<b) && (a>c) && (c<b))
 printf ("O maior valor eh B: %.2f\nO valor do meio eh A: %.2f\nO menor valor eh C: %.2f", b, a, c);
    if ((a>b) && (a<c) && (c>b))
 printf ("O maior valor eh C: %.2f\nO valor do meio eh A: %.2f\nO menor valor eh B: %.2f", c, a, b);
 if ((a<b) && (a<c) && (c>b))
 printf ("O maior valor eh C: %.2f\nO valor do meio eh B: %.2f\nO menor valor eh A: %.2f", c, b, a);
	
 getch();
 return 0;
}
