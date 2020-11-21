#include <stdio.h>
#include <math.h>
int main() {
	int KM;
	float lt,kmlt;
	scanf("%d",&KM);
	scanf("%f",&lt);
	kmlt=(float)KM/lt;
	printf("%.3f km/l\n",kmlt);
		
}
