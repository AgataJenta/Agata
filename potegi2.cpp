#include <cstdio>

int main()
{
	int n, m;
	scanf ("%d", &n);
	
		if (n==0)
			printf("1\n");
		else

		{
			m=n%4;
			
			switch (m)
			{
			case 0: printf("6\n"); break;
			case 3: printf("8\n"); break;
			case 2: printf("4\n"); break;
			default: printf("2\n");
		}
		}

	return 0;
}