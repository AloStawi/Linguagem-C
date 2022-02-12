#include <stdio.h>
#include <conio.h>

int main(){
float n1, n2, n3, media;
printf ("Entre com a primeira nota: ");
scanf ("%f", &n1);
printf ("Entre com a segunda nota: ");
scanf ("%f", &n2);
printf ("Entre com a terceira: ");
scanf ("%f", &n3);
media = (n1+n2+n3)/3;
if (media>=6.0)
printf ("Aprovado!: %.2f",  media);
else
printf ("Reprovado.: %.2f", media);

getch();
return 0;

}

