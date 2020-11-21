#include <stdio.h>
int main(){
	float vet[6],soma;
	int i,j=0;
	for(i=0;i<6;i++)
	scanf("%f",&vet[i]);
	
	for(i=0;i<6;i++)
	{
		if(vet[i]>0)
		{
		j++;
		soma=soma+vet[i];
		}
	}
	printf("%d valores positivos\n",j);
	printf("%.1f\n",soma/j);
}
