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
//		/*printf("��ڰ� �����ϴ� ���� �Է��ϼ���\n");
//		scanf("%d", &count);*/
//	do {
//		printf("���̸Ӱ� �����ϴ� ���� �Է��ϼ���\n");
//		scanf("%d", &num1);													// �� �ٿ� / rand �Լ�
//		if (num1 > count)
//		{
//			printf("�ٿ�\n");
//			//continue;
//		}
//		else if (num1 < count)
//		{
//			printf("��\n");
//			//continue;
//		}
//		else if (num1 == count)
//		{
//			printf("�½��ϴ�\n");
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
//	printf("10�� ����� �Է��ϼ���");
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
//	printf("�� ���� ���ڿ��� �Է��Ͻÿ�: ");
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
//	printf("�� ���� �Է��ϼ���");
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