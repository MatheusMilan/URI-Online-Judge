#include <stdio.h>
 
int main() {
 
	float I=0,J=1,cont=5;
	
	do
	{
		if(cont==5)
		{
			printf("I=%.0f J=%.0f\n",I,J);
			printf("I=%.0f J=%.0f\n",I,J+1);
			printf("I=%.0f J=%.0f\n",I,J+2);
			cont=0;	
		}
		else
		{
			printf("I=%.1f J=%.1f\n",I,J);
			printf("I=%.1f J=%.1f\n",I,J+1);
			printf("I=%.1f J=%.1f\n",I,J+2);	
		}
		I=I+0.2;
		J=J+0.2;
		cont++;
	}while(I<2.2);
	
	return 0;
}
