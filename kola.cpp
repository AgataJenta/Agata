#include <cstdio>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n%d\n", a*b*c, 2*(a*b+a*c+b*c));
	return 0;
}