#include <stdio.h>
 
int main() {
 	int N,R[10000],i,X=0,Y=0;
 	
 	
    scanf("%d ",&N);
    while(N!=0)
    {
    for(i=0;i<N-1;i++)
    {
    scanf("%d",&R[i]);
 	if(R[i]==0)
 	X++;
 	else
 	Y++;
 	}
 	
 	scanf("%d",&R[i]);
 	if(R[i]==0)
 	X++;
 	else
 	Y++;
 	printf("Mary won %d times and John won %d times\n",X,Y);
 	X=0;
 	Y=0;
 	scanf("%d ",&N);
 	}	
    return 0;
}
