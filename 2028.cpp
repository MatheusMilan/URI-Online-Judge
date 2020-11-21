#include <stdio.h>

int main()
{
	int N,numCaso=1,qtdNumeros,i,contPrint;
	
	while(scanf("%d",&N)!=EOF)
	{
		if(N==0)
		{
			printf("Caso %d: 1 numero\n",numCaso);
			printf("0\n\n");	
		}
		else
		{
			qtdNumeros=0;
			for(i=N;i>0;i--)
				qtdNumeros=qtdNumeros+i;			
			qtdNumeros++;
			
			printf("Caso %d: %d numeros\n",numCaso,qtdNumeros);
			printf("0 ");
			
			for(i=0;i<N-1;i++)
			{
				for(contPrint=0;contPrint<=i;contPrint++)
					printf("%d ",i+1);
			}
			for(contPrint=0;contPrint<=i-1;contPrint++)
					printf("%d ",i+1);
			printf("%d\n\n",i+1);
		}
		numCaso++;	
	}
	return 0;
}
