#include <stdio.h>
#define TF 3
int main(){
	int Vet[TF],Vet1[TF],i,j,aux;
	scanf("%d %d %d",&Vet[0],&Vet[1],&Vet[2]);
	Vet1[0]=Vet[0];
		Vet1[1]=Vet[1];
			Vet1[2]=Vet[2];
	for(i=0;i<TF;i++)
	{
		for(j=i+1;j<TF;j++)
		if(Vet[j]<Vet[i])
		{
			aux=Vet[i];
			Vet[i]=Vet[j];
			Vet[j]=aux;
		}
		
	}
	printf("%d\n",Vet[0]);
		printf("%d\n",Vet[1]);
			printf("%d\n\n",Vet[2]);
	printf("%d\n",Vet1[0]);
		printf("%d\n",Vet1[1]);
			printf("%d\n",Vet1[2]);		
}
