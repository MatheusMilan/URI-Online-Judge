#include <stdio.h>
int main(){
	int A,i=2;
	scanf("%d",&A);
	if(A%2==0)
	{
		while(i<=A)
		{
			printf("%d^%d = %d\n",i,2,i*i);
			i=i+2;
		}
	}
	else
	{
		while(i<A)
		{
			printf("%d^%d = %d\n",i,2,i*i);
			i=i+2;
		}	
	}
	
}
