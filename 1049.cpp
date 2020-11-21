#include<stdio.h>
#include <string.h>
int main(){
	char A[15],B[15],C[15];
	
	scanf("%s",&A);
	scanf("%s",&B);
	scanf("%s",&C);
	
	if(strcmp(A,"vertebrado")==0)
	{
		if(strcmp(B,"ave")==0)
		{
			if(strcmp(C,"carnivoro")==0)
			printf("aguia\n");
			else
			printf("pomba\n");	
		}
		else
		{
		if(strcmp(C,"onivoro")==0)
		printf("homem\n");
		else
		printf("vaca\n");	
		}	
	}
	else
	{
		if(strcmp(B,"inseto")==0)
		{
		if(strcmp(C,"hematofago")==0)
		printf("pulga\n");
		else
		printf("lagarta\n");		
		}
		else
		{
		if(strcmp(C,"hematofago")==0)
		printf("sanguessuga\n");
		else
		printf("minhoca\n");	
		}	
	}	
}
