#include <stdio.h>
int main(){
	int A,i=1;
	scanf("%d",&A);
	if(A%2==0)
	{
		while(i<A)
		{
			printf("%d\n",i);
			i=i+2;
		}
	}
	else
	{
		while(i<=A)
		{
			printf("%d\n",i);
			i=i+2;
		}
	}
}
