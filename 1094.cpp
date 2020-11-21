#include <stdio.h>
int main(){
	int i,A,qtde,rato=0,coelho=0,sapo=0,total=0;
	float percentcoelho,percentrato,percentsapo;
	char tipo;
	scanf("%d",&A);
	for(i=0;i<A;i++)
	{
		scanf("%d %c",&qtde,&tipo);	
		if(tipo=='C')
			coelho=coelho+qtde;
		if(tipo=='R')
			rato=rato+qtde;
		if(tipo=='S')
			sapo=sapo+qtde;
	}
	total=coelho+rato+sapo;
	percentcoelho=(float)coelho/total;
	percentrato=(float)rato/total;
	percentsapo=(float)sapo/total;
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",coelho);
	printf("Total de ratos: %d\n",rato);
	printf("Total de sapos: %d\n",sapo);
	printf("Percentual de coelhos: %.2f %\n",percentcoelho*100);
	printf("Percentual de ratos: %.2f %\n",percentrato*100);
	printf("Percentual de sapos: %.2f %\n",percentsapo*100);
}
