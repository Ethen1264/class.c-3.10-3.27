//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a;
//	int i;
//	scanf("%d", & a);
//	for (i = 0; i < a; i++)
//	{
//		printf("C언어 프로그래밍\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	char a = 'A';
//	for (a = 'A'; a <= 90; a++)
//	{
//		printf("%c", a);
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a;
//
//	for(a=0; a<=20; a++)
//		if (a % 2 == 1)
//		{
//			printf(" %d", a);
//		}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a;
//	int i;
//	int sum	 = 0;
//	scanf("%d", &a);
//	for (i = 0; i <= a; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a;
//	int i;
//	int cnt = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		scanf("%d", &a);
//		if (a % 2 == 0)
//		{
//			cnt++;
//			
//		}
//		printf("입력받은 짝수의 개수는 %d\n", cnt);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int i, score, sum = 0;
//	double avg;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//	}
//	avg = (double)sum / i;
//	printf("총점: %d\n", sum);
//	printf("평균: %.1f\n", avg);
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int i, j;
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("%d", i);
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int i, j;
//
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 2; j <= 6; j++)
//		{
//			printf("%d", j + i);
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int i;
//	int j;
//	//scanf("%d", &a);
//
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 2; j < 5; j++)
//		{
//			printf(" %d * %d = %d", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//------------------------------------------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a;
//	int i;
//	scanf("%d", &a);
//	for (i = 0; i <= a; i++)				//형성평가 1
//	{
//		printf("JUNGOL\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a, b;
//	int g, s;
//	int i;
//
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		g = a;
//		s = b;
//	}
//	else if (b > a)						//형성평가 2
//	{
//		g = b;
//		s = a;
//	}
//	for (i = 0; (i <= g); i++)
//	{
//		if (i >= s)
//		{
//			printf("%d ", i);
//		}
//		continue;
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a = 0, i, sum=0;
//	scanf("%d", &a);
//
//	for (i = 0; i <= a; i++)			//형성평가 3
//	{
//		if (i % 5 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a, b;
//	int i;
//	int sum=0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)s
//	{			
//		scanf("%d", &b);			//형성평가 4
//			sum += b;
//	}
//	printf("%.2f", (double)sum / a);	
//	return 0;
//}


//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int i, num, even=0, odd=0;
//
//	for (i = 1; i <=10; i++)
//	{
//		scanf("%d", &num);
//		if (num % 2 == 0)
//		{
//			even++;
//		}
//		else if (num % 2 == 1)
//		{
//			odd++;;
//		}
//	}
//	printf("even: %d\n", even);
//	printf("odd: %d\n", odd);
//
//	return 0;
//}
//
//

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int a, b;
//	int Max, Min;
//	int i;
//	int cnt=0, sum=0;
//	scanf("%d %d", &a, &b);
//
//	Max = a > b ? a : b;
//	Min = a < b ? a : b;
//
//	for (i = Min; i <= Max; i++)
//	{
//		if (i % 3 == 0 || i % 5 == 0)			//형성평가 6
//		{
//			sum += i;
//			cnt++;
//		}
//	}
//	printf("sum: %d\n", sum);
//	printf("avg: %.1f", (double)sum / cnt);
//
//	return 0;
//
//}
//
//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int i;
//	int a;
//	int sum;
//	scanf("%d", &a);
//
//	for (i = 1; i <= 10; i++)					//형성평가 7
//	{
//		sum = a * i;
//		printf("%d ", sum);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int i, j;
//
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= 4; j++)				//형성평가 8
//		{
//			printf("%d ", i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int i, j;
//
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)				//형성평가 9
//		{
//			printf("(%d, %d) ", i, j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int a, b;
	int i, j;

	scanf("%d %d", &a, &b);

	if (a>b)
		for (i = 1; i <= 9; i++)
		{
			for (j = a; j >= b; j--)
				printf("%d * %d = %2d   ", j, i, i * j);		//형성평가 10
			printf("\n");
		}
	else
		for (i = 1; i <= 9; i++)
		{
			for (j = a; j <= b; j++)
				printf("%d * %d = %2d   ", j, i, i * j);
			printf("\n");
		}

	return 0;
}