#include <stdio.h>
 
int main() {
    
    int total=0,X,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&X);
        switch(i)
        {
            case 0:
                total+=X*300;
                break;
            case 1:
                 total+=X*1500;
                break;
            case 2:
                total+=X*600;
                break;
            case 3:
                total+=X*1000;
                break;
            case 4:
                total+=X*150;
                break;
        }
    }
    printf("%d\n",total+225);
    return 0;
}
