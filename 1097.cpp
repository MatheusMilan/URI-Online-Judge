#include <stdio.h>

int main(){
	int i=1,j=7,loop=0;
	for(i=1,j=7;i<=9;i=i+2)
	{
		printf("I=%d J=%d\n",i,j);
		printf("I=%d J=%d\n",i,j-1);
		printf("I=%d J=%d\n",i,j-2);
		loop++;
		j=7+2*loop;	
	}
}
