//#include <stdio.h>
//#pragma warning(disable:4996)
//#include <stdlib.h>
//#include <time.h>
//int main(void)
//{
//
//	int count;
//	srand(time(NULL));
//	count = rand() % 100 + 1;
//	int num1;
//		/*printf("운영자가 생각하는 수를 입력하세요\n");
//		scanf("%d", &count);*/
//	do {
//		printf("게이머가 생각하는 수를 입력하세요\n");
//		scanf("%d", &num1);													// 업 다운 / rand 함수
//		if (num1 > count)
//		{
//			printf("다운\n");
//			//continue;
//		}
//		else if (num1 < count)
//		{
//			printf("업\n");
//			//continue;
//		}
//		else if (num1 == count)
//		{
//			printf("맞습니다\n");
//			break;
//
//		}
//	} while (1);
//
//	return 0;
//}
//


//#include <stdio.h>
//#pragma warning(disable:4996)
//#include <stdlib.h>
//#include <time.h>
//int main(void)
//{
//	int a = 10;
//	int b = 1;
//	printf("10의 약수를 입력하세요");
//	while (1)
//	{
//
//		scanf("%d", &b);
//		if (a % b == 0)
//		{
//			printf("%d\n", b);
//		}
//		b++;
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//#include <stdlib.h>
//#include <time.h>
//int main(void)
//{
//	char ch;
//	int cnt = 0;
//
//	printf("한 줄의 문자열을 입력하시오: ");
//	while ((ch = getchar()) != '\n')
//	{
//		
//		if (ch <= 'z' && ch >= 'a')
//			printf("%c", ch - 32);
//	}
//	while ((ch = getchar()) != 'q')
//	{
//		putchar(ch);
//		if (ch == 'a')
//		{
//			cnt += 1;
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//#include <stdlib.h>
//#include <time.h>
//int main(void)
//{
//	int a, b, c = 0;
//	printf("두 수를 입력하세요");
//	scanf("%d %d", &a, &b);
//
//	while (b!=0)
//	{
//		c = a % b;
//		a = b;									// 72 30
//		b = c;
//	}
//	printf("%d", a);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//#include <stdlib.h>
//#include <time.h>
//int main(void)
//{
//	int i =1; 
//	int sum = 1;
//
//	while (i <= 10)
//	{
//		sum *= i;
//		i++;
//	}
//	printf("%d", sum);
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//#include <stdlib.h>
//#include <time.h>
//int main(void)
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i % 3 == 0)
//		{
//			i++;
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	}
//
//	return 0;
//}


#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i;
	int j;
	//scanf("%d", &a);

	for (i = 2; i <= 9; i++);
	{
		for (j = 1; j <= 9; j++);
		{
			printf("%d * %d = %d\n", i, j, i * j);
			printf("hellow world");
		}
	}

	return 0;
}

//{
//	printf("hellow world");
//
//	return 0;
//}