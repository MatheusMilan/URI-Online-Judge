#include <stdio.h>

int main() {
	int cedulas100,cedulas50,cedulas20,cedulas10,cedulas5,cedulas2,moedas1,moedas50,moedas25,moedas10,moedas5,moedas01;
	double valor;
	scanf("%lf",&valor);
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
	moedas1=valor/1;
	valor=valor-(1*moedas1);
	moedas50=valor/0.5;
	valor=valor-(0.5*moedas50);
	moedas25=valor/0.25;
	valor=valor-(0.25*moedas25);
	moedas10=valor/0.1;
	valor=valor-(0.1*moedas10);
	moedas5=valor/0.05;
	valor=valor-(0.05*moedas5);
	valor=(double)0.001+valor;
	moedas01=valor/0.01;
	valor=valor-(0.01*moedas01);	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",cedulas100);
	printf("%d nota(s) de R$ 50.00\n",cedulas50);
	printf("%d nota(s) de R$ 20.00\n",cedulas20);
	printf("%d nota(s) de R$ 10.00\n",cedulas10);
	printf("%d nota(s) de R$ 5.00\n",cedulas5);
	printf("%d nota(s) de R$ 2.00\n",cedulas2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",moedas1);
	printf("%d moeda(s) de R$ 0.50\n",moedas50);
	printf("%d moeda(s) de R$ 0.25\n",moedas25);
	printf("%d moeda(s) de R$ 0.10\n",moedas10);
	printf("%d moeda(s) de R$ 0.05\n",moedas5);
	printf("%d moeda(s) de R$ 0.01\n",moedas01);
}
