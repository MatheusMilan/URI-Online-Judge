#include <stdio.h>
#include <math.h>

int main() {
 
	int V,N;
	int total;
	int i;
	scanf("%d %d",&V,&N);
	total=V*N;
 	for(i=1;i<9;i++)
 		printf("%d ",(int)ceil(total*i/10.0));
 		
 	printf("%d\n",(int)ceil(total*i/10.0));
    return 0;
}
