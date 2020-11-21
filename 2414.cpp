#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char linha[1000];
	char numero[100];
	int maior=0,i,numeroExtraido,j=0;
	
	fflush(stdin);
	gets(linha);
	
	for(i=0;i<strlen(linha);i++)
	{
		if(linha[i]!=' ')
		{
			numero[j]=linha[i];
			j++;
		}
		else
		{
			numero[j]='\0';
			numeroExtraido=atoi(numero);
			if(numeroExtraido>maior)
				maior=numeroExtraido;
			j=0;
		}		
	}
	printf("%d\n",maior);
	return 0;
}
