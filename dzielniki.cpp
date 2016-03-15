#include <cstdio> 
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i*i < n; i++)
        {if (n%i == 0) printf("%d\n", i);}

    for (int j = (int) sqrt(n); j >= 1; j--)
        if (n%j == 0) printf("%d\n", n/j);
    return 0;
} 