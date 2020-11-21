#include <stdio.h>
 
int main() {
 
	int X,Y,N,i;
	int soma;
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		soma=0;
		scanf("%d %d",&X,&Y);
		
		if(X==Y)
			printf("0\n");
		else
		{
			if(X>Y)
			{
				Y++;
				while(Y<X)
				{
					if(Y%2!=0)
					{
						soma=soma+Y;	
					}
					Y++;	
				}	
			}
			else
			{
				X++;
				while(X<Y)
				{
					if(X%2!=0)
					{
						soma=soma+X;	
					}
					X++;	
				}		
			}
			printf("%d\n",soma);	
		}	
	}
	
	return 0;
}
