#include <stdio.h>
 
int main() {
 	float X,Y;
 	scanf("%f %f",&X,&Y);
	while((X<0 || X>10) || (Y<0 || Y>10))
	{
		if(X>=0 && X<=10)
		{
			printf("nota invalida\n");
			scanf("%f",&Y);	
		}
			else
			{
				if(Y>=0 && Y<=10)
				{
					printf("nota invalida\n");
					scanf("%f",&X);
				}		
				else
				{
					printf("nota invalida\n");
					scanf("%f %f",&X,&Y);	
				}	
			}	
	}
	printf("media = %.2f\n",(X+Y)/2);

    return 0;
}
