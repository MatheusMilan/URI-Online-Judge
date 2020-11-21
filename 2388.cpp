#include <stdio.h>
 
int main() {
 
    int N,T,V,i;
    int km=0;
    
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
    {
       scanf("%d %d",&T,&V);
       km=km+(T*V);
    }
    printf("%d\n",km);
    return 0;
}
