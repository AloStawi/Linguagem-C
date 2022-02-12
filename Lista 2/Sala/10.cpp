#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 int n1, n2, n3, n4, n5, x1, x2;
 printf ("Insira o primeiro numero: ");
 scanf ("%d", &n1);
 printf ("Insira o segundo numero: ");
 scanf ("%d", &n2);
 printf ("Insira o terceiro numero: ");
 scanf ("%d", &n3);
 printf ("Insira o quarto numero: ");
 scanf ("%d", &n4);
 printf ("Insira o quinto numero: ");
 scanf ("%d", &n5); 
	
 x1=n1;
 if (x1<n2) {
 x1=n2;
 }
 if (x1<n3) {
 x1=n3;
 }
 if (x1<n4) {
 x1=n4;
 }
 if (n1<n5) {
 x1=n5;
 }
 {
 printf ("O maior valor eh: %.2d\n", x1);
} 

 x2=n1;
 if (x2>n2) {
 x2=n2;
 }
 if (x2>n3) {
 x2=n3;
 }
 if (x2>n4) {
 x2=n4;
 }
 if (n2>n5) {
 x2=n5;
 }
 {
 printf ("O menor valor eh: %.2d", x2);
}
getch();
return 0; 
}
