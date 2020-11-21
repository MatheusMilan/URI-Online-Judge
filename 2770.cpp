#include <stdio.h>
 
int main() {
 	int X,Y,M,Xi,Yi,i;
    while(scanf("%d %d %d",&X,&Y,&M)>0)
    {
    	for(i=0;i<M;i++)
    	{
    		scanf("%d %d",&Xi,&Yi);
    		if((Xi<=X && Yi<=Y) || (Xi<=Y && Yi<=X))
    			printf("Sim\n");
    		else
    			printf("Nao\n");
		}
	}
	return 0;
}
