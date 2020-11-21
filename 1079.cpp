#include <stdio.h>
int main(){
	int A,i;
	scanf("%d",&A);
	float vet[A],vet2[A],vet3[A],vetMedia[A];
	for(i=0;i<A;i++)
	{
		scanf("%f %f %f",&vet[i],&vet2[i],&vet3[A]);
		vetMedia[i]=vet[i]*0.2+vet2[i]*0.3+vet3[A]*0.5;
	}
	for(i=0;i<A;i++)
	printf("%.1f\n",vetMedia[i]);
}
