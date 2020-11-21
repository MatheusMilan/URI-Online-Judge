#include <stdio.h>
 
int main() {
 
   	int inter=0,gremio=0,empate=0;
   	int resp;
   	int golInter,golGremio,grenais=0;
   	do
   	{
   		scanf("%d %d",&golInter,&golGremio);
   		
   		if(golInter>golGremio)
   			inter++;
   		else
   		{
   			if(golGremio>golInter)
			   gremio++;
			   else
			   empate++;	
		}
		grenais++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&resp);
	}while(resp==1);
 	
 	printf("%d grenais\n",grenais);
 	printf("Inter:%d\n",inter);
 	printf("Gremio:%d\n",gremio);
 	printf("Empates:%d\n",empate);
 	if(inter>gremio)
 		printf("Inter venceu mais\n");
 		else
 			if(gremio>inter)
 				printf("Gremio venceu mais\n");
 				else
 					printf("Nao houve vencedor\n");
    return 0;
}
