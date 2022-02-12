#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
 float Salbr, Salliq, Hrs, adic;
 printf ("Isira seu salario bruto: ");
 scanf ("%f", &Salbr);
 printf ("Insira sua quantidade de horas trabalhadas: ");
 scanf ("%f", &Hrs);
 if (Hrs>160) {
 Hrs=Hrs-160;
    adic=((Salbr/160)+(Hrs*0.50));
    Salbr=adic+Salbr;
}
    if (Salbr>800.00) {
    Salliq=Salbr;
    printf ("O salario Liquido eh: %.2f", Salliq);
}
     if (((Salbr>800.00 || (Salbr==800.00)) && ((Salbr<1600.00) || (Salbr==1600.00)))) {
	 
     Salliq=((Salbr - (Salbr*0.13)));
     }
    if (Salliq=((Salbr-(Salbr*0.22)))){
	
    printf ("O salario Liquido eh: %.2f", Salliq);
}
    getch ();
    return 0;
}

