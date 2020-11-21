#include <stdio.h>
#include <string.h>
int main(){
	
	int VetCodigo[5],codigo,qtde;
	char VetEsp[5][20];
	float VetPre[5],Total;
		
	VetCodigo[0]=1;
	VetCodigo[1]=2;
	VetCodigo[2]=3;
	VetCodigo[3]=4;
	VetCodigo[4]=5;
	strcpy(VetEsp[0],"Cachorro Quente");
	strcpy(VetEsp[1],"X-Salada");
	strcpy(VetEsp[2],"X-Bacon");
	strcpy(VetEsp[3],"Torrada Simples");
	strcpy(VetEsp[4],"Refrigerante");
	VetPre[0]=4.00;
	VetPre[1]=4.50;
	VetPre[2]=5.00;
	VetPre[3]=2.00;
	VetPre[4]=1.50;	
	
	scanf("%d %d",&codigo,&qtde);
	Total=VetPre[codigo-1]*qtde;
	printf("Total: R$ %.2f\n",Total);
}
