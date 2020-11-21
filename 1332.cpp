#include <stdio.h>
#include <string.h>
int main() {
    
    int casosTestes;
    char palavra[10];
    int letrasCorretasOne;
    int letrasCorretasTwo;
    int i,j;
    
    scanf("%d",&casosTestes);
    if(casosTestes<=1000)
    {
        for(i=0;i<casosTestes;i++)
        {
            fflush(stdin);
            scanf("%s",&palavra);
            if(strlen(palavra)==5)
                printf("3\n");
            else
            {
            	letrasCorretasOne=0;
            	letrasCorretasTwo=0;
            	for(j=0;j<strlen(palavra);j++)
            	{
            		switch(j)
					{
						case 0:
							if(palavra[j]=='o')
								letrasCorretasOne++;
							if(palavra[j]=='t')
								letrasCorretasTwo++;
							break;
								
						case 1:
							if(palavra[j]=='n')
								letrasCorretasOne++;
							if(palavra[j]=='w')
								letrasCorretasTwo++;
							break;

						case 2:
							if(palavra[j]=='e')
								letrasCorretasOne++;
							if(palavra[j]=='o')
								letrasCorretasTwo++;
							break;	
					}	
				}
				if(letrasCorretasOne>letrasCorretasTwo)
					printf("1\n");
				else
					printf("2\n");		
			}
        } 
    }
    return 0;
}
