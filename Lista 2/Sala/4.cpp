#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 float A, B, C;
 printf ("Insira o primeiro valor para o lado do triangulo: ");
 scanf ("%f", &A);
 printf ("Insira o segundo valor para o lado do triangulo: ");
 scanf ("%f", &B);
 printf ("Insira o terceiro valor para o lado do triangulo: ");
 scanf ("%f", &C);
 if ((A<B+C) && (B<C+A) && (C<B+A))
 {
 if ((A==B) && (C==B))
 printf ("Eh um triangulo Equilatero");
	
 else if ((A==B) || (C==A) || (B==C))
 printf ("Eh um triangulo Isosceles");
	
 else
 printf ("Eh um triangulo Escaleno");
 }
    else 
    printf ("Esses valores nao formam um triangulo");
    
 getch();
 return 0;  
}
