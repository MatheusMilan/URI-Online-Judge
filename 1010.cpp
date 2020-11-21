#include <stdio.h>
int main() {
	int CODIGO1,CODIGO2,QTDE1,QTDE2;
	double VALOR1,VALOR2,PAGAR1,PAGAR2,TOTAL;
	scanf("%d %d %lf",&CODIGO1,&QTDE1,&VALOR1);
	scanf("%d %d %lf",&CODIGO2,&QTDE2,&VALOR2);
	PAGAR1=(double)QTDE1*VALOR1;
	PAGAR2=(double)QTDE2*VALOR2;
	TOTAL=PAGAR1+PAGAR2;
	printf("VALOR A PAGAR: R$ %.2lf\n",TOTAL);
    return 0;
}
