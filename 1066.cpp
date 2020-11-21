#include <stdio.h>
 
int main() {
 
   int A,B,C,D,E;
   int par=0,impar=0,positivo=0,negativo=0,i;
   
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&D);
	scanf("%d",&E);
	
	if(A%2==0)	
		par++;
	else
		impar++;
	if(A>0)
		positivo++;
	else
		if(A<0)
		negativo++;	
	
	if(B%2==0)	
		par++;
	else
		impar++;
	if(B>0)
		positivo++;
	else
		if(B<0)
		negativo++;	

	if(C%2==0)	
		par++;
	else
		impar++;
	if(C>0)
		positivo++;
	else
		if(C<0)
		negativo++;	
		
	if(D%2==0)	
		par++;
	else
		impar++;
	if(D>0)
		positivo++;
	else
		if(D<0)
		negativo++;	

	if(E%2==0)	
		par++;
	else
		impar++;
	if(E>0)
		positivo++;
	else
		if(E<0)
		negativo++;	
	
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",impar);
	printf("%d valor(es) positivo(s)\n",positivo);
	printf("%d valor(es) negativo(s)\n",negativo);	
		
	return 0;
}
