#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 int n1, n2, n3, n4;
 printf ("Exiba quatro numeros inteiros: ");
 scanf ("%i %i %i %i", &n1, &n2, &n3, &n4);
 if ((n1 % 2==0) && (n1 % 3==0))
  {
 printf ("O primeiro numero eh divisivel por 2 e 3\n");
  }
 if ((n2 % 2==0) && (n2 % 3==0)) {
 printf ("O segundo numero eh divisivel por 2 e 3\n");
 }
 if ((n3 % 2==0) && (n3 % 3==0)) {
 printf ("O terceiro numero eh divisivel por 2 e 3\n");
 }
 if ((n4 % 2==0) && (n4 % 3==0)) {
 printf ("O quarto numero eh divisivel por 2 e 3");
 }
 else
 {
 printf ("Nao foi digitado nenhum numero divisivel por 2 e por 3");
 }
getch ();
return 0;  
}
