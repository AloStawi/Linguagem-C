#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 float a, b, c, raiz1, raiz2, delta;
 printf ("Insira o valor de A: ");
 scanf ("%f", &a);
 printf ("insira o valor de B: ");
 scanf ("%f", &b);
 printf ("Insira o valor de C: ");
 scanf ("%f", &c);
 delta=pow(b,2)-4*a*c;
 if (delta>0)
 {
    raiz1=(-b+pow(delta, 0.5))/(2*a);
    raiz2=(-b-pow(delta, 0.5))/(2*a);
    scanf ("%f", &raiz1);
    scanf ("%f", &raiz2); 
    printf ("A priemira raiz eh: %.2f", raiz1);
    printf ("A segunda raiz eh: %.2f", raiz2);
  } 
     else {
    printf ("Nao foi possivel executar operacao");
    }
     getch();
    return 0;
   
}
