#include <stdio.h>
#include <string.h> 
int main() {
	char nome[30];
	double SALARIO,VENDAS,BONUS;
	gets(nome);
	scanf("%lf",&SALARIO);
	scanf("%lf",&VENDAS);
	BONUS=VENDAS*15/100;
	SALARIO=SALARIO+BONUS;
	printf("TOTAL = R$ %.2lf\n",SALARIO);
    return 0;
}
