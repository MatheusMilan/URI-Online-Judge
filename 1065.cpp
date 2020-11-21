#include <stdio.h>
int main(){
	int vet[5],i,j=0;
	for(i=0;i<5;i++)
	scanf("%d",&vet[i]);
	
	for(i=0;i<5;i++)
	{
		if(vet[i]%2==0)
		{
		j++;
		}
	}
	printf("%d valores pares\n",j);
}
