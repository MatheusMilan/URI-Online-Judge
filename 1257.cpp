#include <stdio.h>
#include <string.h>
int buscaPosAlfabeto(char alfabeto[27],char letra)
{
	int i=0;
	while(alfabeto[i]!=letra)
		i++;
	return i;
}

int main() {
    
	char alfabeto[27];
	char linha[50];
	int i,j,N,somador,L;
	
	int cont1,cont2,cont3;
	
	for(i=0,j=65;i<27;i++,j++)
		alfabeto[i]=j;
		
	scanf("%d",&N);
	for(cont1=0;cont1<N;cont1++)
	{
		somador=0;
		scanf("%d",&L);
		for(cont2=0;cont2<L;cont2++)
		{
			scanf("%s",&linha);
			for(cont3=0;cont3<strlen(linha);cont3++)
				somador=somador+buscaPosAlfabeto(alfabeto,linha[cont3])+cont2+cont3;		
		}
		printf("%d\n",somador);
	}
		
	return 0;
}
