#include <stdio.h>
int main(){
	int i,gasolina=0,diesel=0,alcool=0;
	scanf("%d",&i);
	while(i!=4)
	{
		if(i==1)
		alcool++;
		if(i==2)
		gasolina++;
		if(i==3)
		diesel++;
		scanf("%d",&i);
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alcool);
	printf("Gasolina: %d\n",gasolina);
	printf("Diesel: %d\n",diesel);
}
