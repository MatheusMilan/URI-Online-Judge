#include <stdio.h>
int main(){
	float vet[6];
	int i,j=0;
	for(i=0;i<6;i++)
	scanf("%f",&vet[i]);
	
	for(i=0;i<6;i++)
	{
		if(vet[i]>0)
		j++;
	}
	printf("%d valores positivos\n",j);
}
