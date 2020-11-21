#include <stdio.h>
int main()
{
	int i,j=0;
	scanf("%d",&i);
	int vet[i];
	vet[0]=0;
	vet[1]=1;
	for(j=2;j<i;j++)
	{
		vet[j]=vet[j-1]+vet[j-2];
	}
	for(j=0;j<i-1;j++)
	{
		printf("%d ",vet[j]);
	}
	printf("%d\n",vet[j]);	
}
