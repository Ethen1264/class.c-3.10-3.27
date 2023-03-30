#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	while (1)
	{
		if (a < 1)
		{
			break;
		}
		printf("%d\n", a);
		a--;

	}
	return 0;
}