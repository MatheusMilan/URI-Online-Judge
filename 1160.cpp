#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int T;
	int PA,PB;
	float G1,G2,PAF,PBF;
	int anos,i;
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%d %d %f %f",&PA,&PB,&G1,&G2);
		anos=0;
		PAF=PA;
		PBF=PB;
		while(PAF<=PBF && anos<=100)
		{
			PAF=PAF + (PAF/100)*G1;
			PBF=PBF + (PBF/100)*G2;
			PAF=floor(PAF);
			PBF=floor(PBF);
			anos++;
		}
	
		if(anos<=100)
			printf("%d anos.\n",anos);
		else
			printf("Mais de 1 seculo.\n");
			
	}
	return 0;
}
