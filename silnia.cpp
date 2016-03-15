#include <cstdio> 

int main()
{
    int n, k;
    scanf("%d", &n);
    k=1;
    for (int i = 1; i <= n; i++)
        { k = k*i; }

    printf("%d\n", k);
    return 0;
} 