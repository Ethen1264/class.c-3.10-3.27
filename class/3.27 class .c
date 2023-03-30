#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
//{
//	int i;
//	int j;
//	//scanf("%d", &a);
//
//	for (i = 2; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//	}
//
//	return 0;
//}
//
//{
//	int i;
//	int sum = 0;
//	for (i = 1; sum <= 5000; i++)		//문제 1
//	{
//		sum += i;
//
//	}
//	printf("%d", i-1);
//
//	return 0;
//}

//{
//	int a = 20;
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 2 == 0 || i % 3 == 0)		//문제 2
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//}

//{
//	int i, j;
//
//	for (i = 2; i < 9; i++)
//	{
//		if (i % 2 != 0)
//		{
//			continue;
//		}
//		for (j = 1; j < 9; j++)			//문제3
//		{
//			if (j > i)
//			{
//				break;
//			}
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//		
//	}
//	return 0;
//}

{
	int i;
	int j;
	//scanf("%d", &a);

	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}