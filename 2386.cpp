#include <stdio.h>
#include <math.h>
int main() {
    
	int A,N,F,qtdPercebidas=0,lentePotencial;
	scanf("%d",&A);
	scanf("%d",&N);
	for(;N>0;N--)
	{
		scanf("%d",&F);
		if(A*F>=40000000)
			qtdPercebidas++;
	
	}
	printf("%d\n",qtdPercebidas);
	return 0;
}
