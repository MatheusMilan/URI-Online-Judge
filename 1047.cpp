#include <stdio.h>
int main() {
	int H1,M1,H2,M2;
	int horaFinal,minutoFinal,Final;
	scanf("%d %d %d %d",&H1,&M1,&H2,&M2);
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
		
		if(minutoFinal<0)
		{
			horaFinal=horaFinal-1;
			minutoFinal=minutoFinal+60;
		}
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horaFinal,minutoFinal);
    return 0;
}
