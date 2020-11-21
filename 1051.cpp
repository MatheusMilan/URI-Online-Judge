#include <stdio.h>
int main()
{
	float valor,imposto,fixo1=1000*0.08,fixo2=fixo1+1500*0.18;
	scanf("%f",&valor);
	if(valor<=2000)
	printf("Isento\n");
	else
	{
		if(valor<=3000)
		{
		valor=valor-2000;
		imposto=valor*0.08;
		printf("R$ %.2f\n",imposto);	
		}
			else
			{
				if(valor<=4500)
				{
				valor=valor-3000;
				imposto=valor*0.18+fixo1;
				printf("R$ %.2f\n",imposto);
				}
					else
					{
					valor=valor-4500;
					imposto=valor*0.28+fixo2;
					printf("R$ %.2f\n",imposto);
					}
			}
	}
}
