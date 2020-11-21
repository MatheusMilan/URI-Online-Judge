#include <stdio.h>
int main()
{
	int A,i;
	scanf("%d",&A);
	while(A!=0)
	{
		for(i=1;i<=A;i++)
		{
			if(i==A)
				printf("%d",i);	
			else
				printf("%d ",i);
		}
		printf("\n");
		scanf("%d",&A);	
	}
}
