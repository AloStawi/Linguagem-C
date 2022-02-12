#include <stdio.h>
#include <conio.h>

int main(){
 float n1, n2, media, novamedia, exame;
 printf ("Insira a primeira nota: ");
 scanf ("%f", &n1);
 printf ("Insira a segunda nota: ");
 scanf ("%f", &n2);
 media = (n1+n2)/2;
 if (media>=6)
 printf ("Aprovado!: %.2f", media);
 else 
 printf ("Insira nota de exame: ");
 scanf ("%f", &exame);
 novamedia=media+exame;
 if (novamedia>=5)
 printf ("Aprovado em exame: %.2f", novamedia);
 else
 printf ("Reprovado em exame: ", novamedia);
	
 getch();
 return 0;
	
}
