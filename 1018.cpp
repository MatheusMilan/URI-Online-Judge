#include <stdio.h>

int main() {
	int inicial,valor,cedulas100,cedulas50,cedulas20,cedulas10,cedulas5,cedulas2,cedulas1;
	scanf("%d",&inicial);
	valor=inicial;
	cedulas100=valor/100;
	valor=valor-(100*cedulas100);
	cedulas50=valor/50;
	valor=valor-(50*cedulas50);
	cedulas20=valor/20;
	valor=valor-(20*cedulas20);
	cedulas10=valor/10;
	valor=valor-(10*cedulas10);
	cedulas5=valor/5;
	valor=valor-(5*cedulas5);
	cedulas2=valor/2;
	valor=valor-(2*cedulas2);
	cedulas1=valor/1;
	valor=valor-(1*cedulas100);
	printf("%d\n",inicial);
	printf("%d nota(s) de R$ 100,00\n",cedulas100);
	printf("%d nota(s) de R$ 50,00\n",cedulas50);
	printf("%d nota(s) de R$ 20,00\n",cedulas20);
	printf("%d nota(s) de R$ 10,00\n",cedulas10);
	printf("%d nota(s) de R$ 5,00\n",cedulas5);
	printf("%d nota(s) de R$ 2,00\n",cedulas2);
	printf("%d nota(s) de R$ 1,00\n",cedulas1);
}
