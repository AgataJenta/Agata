#include <cstdio>

int main()
{
	int a;
	scanf("%d", &a);
		if (a%100==0 && a%400!=0)
			printf("NIE\n");
		else
			if (a%4==0)
				printf("TAK\n");
			else
				printf("NIE\n");
			
			
	return 0;
}