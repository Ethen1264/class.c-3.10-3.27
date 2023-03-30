#include<stdio.h>
int main()
{
	int a = 0;	
	int b;
	scanf("%d", &b);
	while (1)
	{
		if (a > b)
		{
			break;
		}
		printf("%d\n", a);
		a++;
		
	}

	return 0;
}