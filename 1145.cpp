#include <stdio.h>
 
int main() {
 
	int X,Y;
	int j,i;
	scanf("%d %d",&X,&Y);
	for(j=1;j<=Y;j++)
	{
		for(i=0;i<X-1;i++)
		{
			printf("%d ",j);
			j++;
		}
		printf("%d\n",j);
	}
	return 0;
}
