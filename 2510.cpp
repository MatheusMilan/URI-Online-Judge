#include <stdio.h>
#include <string.h>
int main(){
	int T,i;
	char mau[100];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%s",&mau);
		if(strlen(mau)<26 && strlen(mau)>0)
			printf("Y\n");
		else
			printf("N\n");
	}
		
}
