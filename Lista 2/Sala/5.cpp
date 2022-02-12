#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 float a, b, c;
 printf ("Insira tres valores: ");
 scanf ("%f %f %f", &a, &b, &c);
    if ((a>b) && (a>c) && (c>b)) {
    printf ("Os valores em ordem crescente sao: %.2f %.2f %.2f", b, c, a);
}
    else if
    ((a<b) && (a<c) && (c>b))
    printf ("Os valores em ordem crescente sao: %.2f %.2f %.2f", a, b, c);
    else if
    ((b<a) && (b<c) && (a<c))
    printf ("Os valores em ordem crescente sao: %.2f %.2f %.2f", b, a, c);
    else if 
    ((b>a) && (b<c) && (a<c))
    printf ("Os valores em ordem crescente sao: %.2f %.2f %.2f", a, c, b);
    else if
    ((b<a) && (b<c) && (a>c))
    printf ("Os valores em ordem crescente sao: %.2f %.2f &%.2f", b, c, a);
    else if
    ((c<a) && (b>c) && (a<b))
    printf ("Os valores em ordem crescente sao: %.2f %.2f %.2f", c, a, b);
    else if
    ((c<a) && (b>c) && (a>b))
    printf ("Os valores em ordem crescente sao: %.2f %.2f %.2f", c, b, a);
   
    getch();
    return 0; 
}
