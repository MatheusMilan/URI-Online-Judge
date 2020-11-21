#include <stdio.h>

int main() {
    int v,t;
    while ((scanf("%d", &v) != EOF) && (scanf("%d", &t) != EOF))
    {
		if(v==0)
			printf("%d\n",v);
		else
		{
			printf("%d\n",(v*2)*t);
		}
    }
    return 0;
}
