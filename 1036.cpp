#include <stdio.h>
#include <math.h>

int main(){
	float A,B,C,x1,x2,delta;
	scanf("%f %f %f",&A,&B,&C);
	if(((pow(B,2)-4*A*C)/(2*A)<0) || (A<=0))
	printf("Impossivel calcular\n");
	else
	{
	delta=B*B-4*A*C;
	x1=(-B+sqrt(delta))/(2*A);
	x2=(-B-sqrt(delta))/(2*A);
	printf("R1 = %.5f\n",x1);
	printf("R2 = %.5f\n",x2);	
	}
}
