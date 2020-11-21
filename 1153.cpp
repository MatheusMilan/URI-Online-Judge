#include <stdio.h>
int main()
{
	int N,fatorial=1,i;
	scanf("%d",&N);
	for(i=N;i>0;i--)
	fatorial=fatorial*i;
	printf("%d\n",fatorial);
}
