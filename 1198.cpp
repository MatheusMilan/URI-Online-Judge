#include <stdio.h>

int main() {
    long long int hash,inim;
    while ((scanf("%lld", &hash) != EOF) && (scanf("%lld", &inim) != EOF))
    {
		if(hash>inim)
		{
			printf("%lld\n",hash-inim);
		}
		else
		{
			printf("%lld\n",inim-hash);
		}
    }
    return 0;
}
