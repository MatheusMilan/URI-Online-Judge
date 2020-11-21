#include <stdio.h>
int main(){
	int M,N,soma,i;
	scanf("%d %d",&M,&N);
	while(M>0 && N>0)
	{
		if(M<N)
		{
			for(i=M;i<=N;i++)
			{
				printf("%d ",i);
				soma=soma+i;
			}
			printf("Sum=%d\n",soma);
			soma=0;	
		}
		else
		{
			for(i=N;i<=M;i++)
			{
				printf("%d ",i);
				soma=soma+i;
			}
			printf("Sum=%d\n",soma);
			soma=0;	
		}
		scanf("%d %d",&M,&N);	
	}
}
