#include <stdio.h>
int main(){
	int i,maior=0,pos,valor;
	for(i=0;i<100;i++)
	{
		scanf("%d",&valor);
		if(valor>maior)
		{
			maior=valor;
			pos=i+1;
		}	
	}
	printf("%d\n",maior);
	printf("%d\n",pos);
}
