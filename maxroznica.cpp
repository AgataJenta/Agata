
#include <cstdio> 

int main()
{
    int n, a, b;
    	scanf("%d\n", &n);
    	scanf("%d", &a);
    int min, max;
    min=a;
    max=a;
    	for (int i = 1; i <= n-1; i++)
        { scanf("%d", &a); 
		if (a<min) min=a;
		if (a>max) max=a;
		}

    	printf("%d\n", max-min);
    return 0;
} 