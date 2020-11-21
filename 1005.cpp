#include <stdio.h>
 
int main() {
 
	float A,B,peso1,peso2,MEDIA; 
	
    scanf("%f",&A);
    scanf("%f",&B);
    peso1=A*3.5;
    peso2=B*7.5;
    MEDIA=(peso1+peso2)/11;
 	
 	printf ("MEDIA = %.5f\n",MEDIA);
    return 0;
}
