#include <stdio.h>
#include <conio.h>

int main ()

{
	int a[12];
	int i, j, x, b;
	b=1;
	printf("Insira 12 numeros:\n");
	for(i=0; i<=11; ++i)
	{
		printf ("Valor [%d]: ", b++);				
		scanf("%d", &a[i]);	
	}		
	for (i=0;i<=11; i++)
	for(j=i+1; j<=11; ++j)
	{
		if(a[i] > a[j])
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
	}	
	printf("\nValores em ordem decrecente:\n");
	b=1;
	for(i=11;i>=0;i--)
	{
	printf("Valor [%d]: %d\n", b++,a[i]);
	}	
	getch();
	return 0;
}
