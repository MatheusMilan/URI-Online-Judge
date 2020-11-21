#include <stdio.h>
#define TF 100
int main(){
	int i,j;
	double X,N[TF];
	scanf("%lf",&X);
	for(i=0;i<TF;i++)
	{
		N[i]=X;
		X=X/2;	
	}
	for(i=0;i<TF;i++)
	{
		printf("N[%d] = %.4lf\n",i,N[i]);	
	}	
}
