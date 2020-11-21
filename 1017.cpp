#include <stdio.h>
#include <math.h>

int main() {
	int tempo,velocidade;
	float litros;
	scanf("%d",&tempo);
	scanf("%d",&velocidade);
	litros=(float)(tempo*velocidade)/12;
	printf("%.3f\n",litros);
	
}
