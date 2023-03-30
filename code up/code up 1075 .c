#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	while (1)
	{
		a--;
		if (a < 0)
		{
			break;
		}
		printf("%d\n", a);

	}
	return 0;
}