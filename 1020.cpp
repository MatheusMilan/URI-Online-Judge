#include <stdio.h>

int main(){
	int tempo,anos,meses;
	scanf("%d",&tempo);
	anos=tempo/365;
	tempo=tempo-(anos*365);
	meses=tempo/30;
	tempo=tempo-(meses*30);
	printf("%d ano(s)\n",anos);	
	printf("%d mes(es)\n",meses);
	printf("%d dia(s)\n",tempo);
}
