#include <stdio.h>
#define TF 10
int main(){
	int A,i,j,vet[TF];
	scanf("%d",&A);
	for(i=0;i<TF;i++)
	{
		vet[i]=A;
		A=A*2;	
	}
	for(i=0;i<TF;i++)
	{
		printf("N[%d] = %d\n",i,vet[i]);	
	}	
}
