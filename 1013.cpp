#include <stdio.h>
#include <math.h>
int main() {
	int A,B,C,MaiorAB,MaiorAC;
	scanf("%d %d %d",&A,&B,&C);
	MaiorAB=(A+B+abs(A-B))/2;
	MaiorAC=(MaiorAB+C+abs(MaiorAB-C))/2;
	printf("%d eh o maior\n",MaiorAC);	
}
