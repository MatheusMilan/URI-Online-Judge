#include <stdio.h>
 
int main() {
 
 	int X,Y,somador=0;
    scanf("%d",&X);
     scanf("%d",&Y);
	if(X>Y)
	{
		for(;Y<=X;Y++)
			if(Y%13!=0)
				somador=somador+Y;	
	}
	else
	{
		for(;X<=Y;X++)
			if(X%13!=0)
				somador=somador+X;	
	}
				
	printf("%d\n",somador);
    return 0;
}
