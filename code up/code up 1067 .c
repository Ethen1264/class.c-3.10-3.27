#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (0 > a)
	{
		printf("minus\n");
	}
	else
		printf("plus\n");
	if (a % 2 == 0)
	{
		printf("even\n");
	}
	else
		printf("odd\n");
	
	return 0;
}
