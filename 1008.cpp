#include <stdio.h>
 
int main() {
	int A,B,DIFERENCA;
	double C,SALARIO;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%lf",&C);
	SALARIO=(double)B*C;
	printf("NUMBER = %d\n",A);
	printf("SALARY = U$ %.2lf\n",SALARIO);
    return 0;
}
