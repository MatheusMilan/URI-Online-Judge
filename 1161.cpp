#include <stdio.h>

int main() {
    int M,N;
    long long FAT1,FAT2,MULT;
    while ((scanf("%d", &M) != EOF) && (scanf("%d", &N) != EOF))
    {
       if(M==0)
            FAT1=1;
        else
        {
            FAT1=1;
            MULT=1;
            while(MULT<M)
            {
                MULT++;
                FAT1=FAT1*MULT;
            }
        }
        if(N==0)
            FAT2=1;
        else
        {
           FAT2=1;
            MULT=1;
            while(MULT<N)
            {
                MULT++;
                FAT2=FAT2*MULT;
            } 
        }
        printf("%lld\n",FAT1+FAT2);
    }
    return 0;
}
