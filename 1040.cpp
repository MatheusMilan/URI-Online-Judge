#include <stdio.h>

int main(){
	float N1,N2,N3,N4,EXAME,MEDIA,MEDIAFINAL;
	
	scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
	N1=(float)(N1*2)/10;
	N2=(float)(N2*3)/10;
	N3=(float)(N3*4)/10;
	N4=(float)(N4*1)/10;
	MEDIA=(float)N1+N2+N3+N4;
	if(MEDIA>=7)
	{
		printf("Media: %.1f\n",MEDIA);
		printf("Aluno aprovado.\n");	
	}
		else
		{
		if(MEDIA>=5 && MEDIA<=6.9)
			{	
				scanf("%f",&EXAME);
				MEDIAFINAL=(float)(MEDIA+EXAME)/2;
				if(MEDIAFINAL>=5)
				{
					printf("Media: %.1f\n",MEDIA);
					printf("Aluno em exame.\n");
					printf("Nota do exame: %.1f\n",EXAME);
					printf("Aluno aprovado.\n");
					printf("Media final: %.1f\n",MEDIAFINAL);	
				}
				else
				{
				printf("Aluno reprovado.\n");
				printf("Media final: %.1f\n",MEDIAFINAL);	
				}
			}
			else
			{
				printf("Media: %.1f\n",MEDIA);
				printf("Aluno reprovado.\n");
			}
		}
}
