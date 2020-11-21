#include <stdio.h>
 
int main() {
	int H1,M1,H2,M2;
	int horaFinal,minutoFinal,Final;
	scanf("%d %d %d %d",&H1,&M1,&H2,&M2);
	while(H1!=0 || M1!=0 || H2!=0 || M2!=0)
	{
		if(H2>H1)
		{
			horaFinal=H2-H1;
		}
		else
		{
			if(H1==H2)
				if(M2>M1)
					horaFinal=0;
				else
					horaFinal=24;
			else
			{
				horaFinal=H2+24-H1;	
			}
		}
		horaFinal=horaFinal*60;
		
		if(M2>M1)
		{
			minutoFinal=M2-M1;
		}
		else
		{
			if(M1==M2)
				minutoFinal=0;
			else
			{
				minutoFinal=M2-M1;
			}	
		}
		Final=horaFinal+minutoFinal;
		printf("%d\n",Final);
		scanf("%d %d %d %d",&H1,&M1,&H2,&M2);	
	}
    return 0;
}
