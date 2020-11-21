#include <stdio.h>
int main()
{
	int N[1000],T,cont,j=0,i;
	scanf("%d",&T);
	for(i=0;i<1000;i++)
	{
		if(j==T)
		j=0;
		N[i]=j;
		printf("N[%d] = %d\n",i,j);	
		j++;
	}
}
