#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a + b + c);
	printf("%.1f", ((float)a + (float)b + (float)c)/3);

	return 0;
}