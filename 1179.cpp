#include <stdio.h>
#define TF 5
int main(){
	int vetpar[TF],vetimpar[TF],i,A,k=0,m=0,n;
	for(i=0;i<15;i++)
	{
		scanf("%d",&A);
		if(A%2==0)
		{
		if(k==5)
		{
			for(n=0;n<TF;n++)
			printf("par[%d] = %d\n",n,vetpar[n]);
			k=0;
		}
		vetpar[k]=A;
		k++;
		}
		else
		{
		if(m==5)
		{
			for(n=0;n<TF;n++)
			printf("impar[%d] = %d\n",n,vetimpar[n]);
			m=0;
		}
		vetimpar[m]=A;
		m++;
		}	
	}
	for(n=0;n<m;n++)
	printf("impar[%d] = %d\n",n,vetimpar[n]);
	for(n=0;n<k;n++)
	printf("par[%d] = %d\n",n,vetpar[n]);	
}
