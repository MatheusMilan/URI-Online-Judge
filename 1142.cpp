#include <stdio.h>
 
int main() {
 
 	int N,i=1;
 	scanf("%d",&N);
 	for(;N>0;N--)
 	{
 		printf("%d %d %d PUM\n",i,i+1,i+2);
		i+=4;	
	}

    return 0;
}
