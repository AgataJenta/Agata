#include <cstdio>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a!=0 && b%a==0)
		printf("1\n");
	else
	
		if (a==0 && b==0)
		printf("NIESKONCZONOSC\n");
		else
			printf("0\n");

	return 0;
}