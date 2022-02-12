#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
	int a[12], b[12], c[12];
	int i, j, x, B, d;
	B=1;
	printf("Insira 12 numeros:\n");
	for(i=0; i<=11; ++i)
	{
		printf ("Valor [%d] de A: ", B++);				
		scanf("%d", &a[i]);	
	}		
	for (i=0;i<=11; i++)
	for(j=i+1; j<=11; ++j)
	{
		if(a[i] < a[j])
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
	}	
	printf("\nValores em ordem crescente:\n");
	B=1;
	for(i=11;i>=0;i--)
	{
	printf("Valor [%d]: %d\n", B++,a[i]);
	}	
	B=1;
	printf("Insira 12 numeros:\n");
	for(i=0; i<=11; ++i)
	{
		printf ("Valor [%d] de B: ", B++);				
		scanf("%d", &b[i]);	
	}		
	for (i=0;i<=11; i++)
	for(j=i+1; j<=11; ++j)
	{
		if(b[i] < b[j])
		{
			x=b[i];
			b[i]=b[j];
			b[j]=x;
		}
	}	
	printf("\nValores em ordem crescente:\n");
	B=1;
	for(i=11;i>=0;i--)
	{
	printf("Valor [%d]: %d\n", B++, a[i]);
	}	
	for (i=0;i<=11; i++) {
	c[d]=a[j]+b[j];
	printf ("%d\n", c[d]);
	}
	getch();
	return 0;
}

