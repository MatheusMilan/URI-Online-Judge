#include<stdio.h>
 
int main() 
{
 int X, i, resultado,j;
 int N;
 scanf("%d",&N);
 
 for(j=0;j<N;j++)
 {
 	resultado=0;
 	scanf("%d", &X);
 	for (i = 2; i <= X / 2; i++)
	{
    	if (X % i == 0) 
		{
       	resultado++;
    	}
 	}
 
 	if (resultado == 0)
    	printf("%d eh primo\n", X);
 	else
   		printf("%d nao eh primo\n", X);	
 }

 
 return 0;
}
