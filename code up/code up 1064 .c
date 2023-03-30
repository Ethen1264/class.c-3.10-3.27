#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b&&c>b)
	{
		printf("%d", b);
	}
	else if (a > c && b > c)
	{
		printf("%d", c);
	}
	else
		printf("%d", a);
	return 0;
	// a= 3 b= -1 c= 5
}