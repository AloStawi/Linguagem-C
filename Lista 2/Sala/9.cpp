#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 int n1, n2, n3, n4;
 printf ("Exiba quatro numeros inteiros: ");
 scanf ("%i %i %i %i", &n1, &n2, &n3, &n4);
 if ((n1 % 4==0) || (n1 % 5==0))
  {
 printf ("O primeiro numero eh divisivel por 4 e 5\n");
  }
 if ((n2 % 4==0) || (n2 % 5==0)) {
 printf ("O segundo numero eh divisivel por 4 e 5\n");
 }
 if ((n3 % 4==0) || (n3 % 5==0)) {
 printf ("O terceiro numero eh divisivel por 4 e 5\n");
 }
 if ((n4 % 4==0) || (n4 % 5==0)) {
 printf ("O quarto numero eh divisivel por 4 e 5");
 }
 else
 {
 printf ("Nao foi digitado nenhum numero divisivel por 4 e por 5");
 }
getch ();
return 0;  
}
