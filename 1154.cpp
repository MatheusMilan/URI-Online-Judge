#include <stdio.h>

int main() 
{
	int idade,qtdIdades=0;
	float idadeMedia=0;
	
	scanf("%d",&idade);
	while(idade>0)
	{
		qtdIdades++;
		idadeMedia=idadeMedia+idade;
		scanf("%d",&idade);	
	}
	idadeMedia=idadeMedia/qtdIdades;
	printf("%.2f\n",idadeMedia);
	return 0;
}
