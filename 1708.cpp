#include <stdio.h>
#include <math.h>
int main() {
 	
    int X,Y;
    float diferenca;
    int numVoltas;
    scanf("%d %d",&X,&Y);
    diferenca=Y-X;
    numVoltas=ceil(Y/diferenca);
    printf("%d\n",numVoltas);
    return 0;
}
