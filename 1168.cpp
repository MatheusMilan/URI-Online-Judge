#include <stdio.h>
#include <string.h>
 
int main() {
	int N,i,j,leds;
	char linha[100000];
    scanf("%d",&N);
 	for(i=0;i<N;i++)
 	{
 		fflush(stdin);
 		scanf("%s",&linha);
 		leds=0;
 		for(j=0;j<strlen(linha);j++)
		{
			if(linha[j]=='1')
				leds=leds+2;
			else
				if(linha[j]=='4')
					leds=leds+4;
					else
						if(linha[j]=='7')
							leds=leds+3;
							else
								if(linha[j]=='8')
									leds=leds+7;
									else
										if(linha[j]=='2' || linha[j]=='3' || linha[j]=='5')
											leds=leds+5;
											else
											leds=leds+6;			
		}
		printf("%d leds\n",leds);	
	}
    return 0;
}
