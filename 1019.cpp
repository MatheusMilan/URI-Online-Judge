#include <stdio.h>

int main(){
	int tempo,hora,min,seg;
	scanf("%d",&tempo);
	hora=tempo/3600;
	tempo=tempo-(hora*3600);
	min=tempo/60;
	tempo=tempo-(min*60);
	printf("%d:%d:%d\n",hora,min,tempo);	
}
