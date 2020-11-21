#include <stdio.h>
 
int main() {
 
	int X,Y;
	int numSomados=0,soma;
	scanf("%d",&X);
	do
	{
		scanf("%d",&Y);
	}while(Y<=X);
	soma=X;
	soma+=X+1;
	numSomados=numSomados+2;
	X++;
	while(soma<=Y)
	{
		X++;
		soma+=X;
		numSomados=numSomados+1;	
	}
	
	printf("%d\n",numSomados);
	return 0;
	
}
