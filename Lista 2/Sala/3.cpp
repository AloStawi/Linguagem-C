#include <stdio.h>
#include <conio.h>

int main(){
 float n1, n2, n3, n4;
 printf ("Insira o primeiro numero: ");
 scanf ("%f", &n1);
 printf ("insira o segundo valor: ");
 scanf ("%f", &n2);
 if (n1>n2){
 n3 = (n1-n2);
 printf ("A diferenca entre os dois numeros eh: %.2f", n3);
 }
    else
    {
 n4 = n2-n1;
 scanf ("%f", &n4);
 printf ("A diferenca entre os dois numeros eh: %.2f ", n4);
}
	
 getch();
 return 0;
	

}
