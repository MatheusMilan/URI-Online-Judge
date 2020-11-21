#include <stdio.h>
int main(){
	int A,B,C;
	scanf("%d %d",&A,&B);
	if(A==B)
		C=24;
	else
	{
		if(A>B)
			C=(B+24)-A;
		else
		{
			C=B-A;
		}
	}
	printf("O JOGO DUROU %d HORA(S)\n",C);
}
