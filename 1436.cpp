#include <stdio.h>
#include <stdlib.h>
int main() {
    
	int T,N,num,lixo,resultado;
	int k,i;
	scanf("%d",&T);
	for(k=0;k<T;k++)
	{
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			if(num/2==i)
				scanf("%d",&resultado);	
			else
				scanf("%d",&lixo);
		}
	
		printf("Case %d: %d\n",k+1,resultado);
	}
	
	return 0;
}
