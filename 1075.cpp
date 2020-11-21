#include <stdio.h>
int main(){
	int A,i=0;
	scanf("%d",&A);
	for(i=0;i<10000;i++)
	{
		if(i%A==2)
		printf("%d\n",i);
	}
}
