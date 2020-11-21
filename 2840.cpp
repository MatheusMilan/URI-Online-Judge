#include <stdio.h>
#include <math.h>
int main() {
 	
 	int R,L;
 	double v;
 	scanf("%d %d",&R,&L);
 	
 	v=(4.0/3.0)*(3.1415*(pow(R,3)));
 	
 	v=floor(L/v);
 	printf("%.0f\n",v);
 	
    return 0;
}
