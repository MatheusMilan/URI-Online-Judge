#include <stdio.h>
#include <string.h>
int main() {
 
	char Frase1[100],Frase2[100],Frase3[100];
 	
 	fflush(stdin);
 	gets(Frase1);
 	fflush(stdin);
 	gets(Frase2);
 	fflush(stdin);
 	gets(Frase3);
 	printf("%s%s%s\n",Frase1,Frase2,Frase3);
 	printf("%s%s%s\n",Frase2,Frase3,Frase1);
 	printf("%s%s%s\n",Frase3,Frase1,Frase2);
 	Frase1[10]='\0';
 	Frase2[10]='\0';
 	Frase3[10]='\0';
 	printf("%s%s%s\n",Frase1,Frase2,Frase3);
 	
    return 0;
}
