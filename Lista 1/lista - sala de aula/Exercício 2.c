#include<stdio.h>
#include<conio.h>

int main ()

{
    float C, F;
     
    printf ("Entre com a temperatura em fahrenheit");
    scanf("%f", &F);
    C= (((F-32)*5)/9);
    printf ("A temperatura em graus Celsius eh: %f", C);
    
    getch();
    return 0;
}
