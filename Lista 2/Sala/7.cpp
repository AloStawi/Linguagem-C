#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 float n;
 printf ("Insira o numero: ");
 scanf ("%f", &n);
 if (n>0)
 {
 printf ("Seu numero eh: %.2f", n);
 }
 else {
 n=n*(-1);
 printf ("Seu numero eh: %.2f", n);
 }
	
 getch();
 return 0;
}
