#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
  int num, f1=0, f2=1, f3;
  printf ("Insira um numero: ");
  scanf("%d", &num);
  if (num < 0)
  {
    printf("Numero invalido");
  }
  else{
    printf("0\n - 1\n ");
    while (f2 < num)
    {
      f3 = f2 + f1;
      printf(" - %d\n", f3);
      f1=f2;
      f2=f3;
    }
    printf("\n");
    return 0;
  }
}
