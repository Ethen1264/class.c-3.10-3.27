//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	double a = 0, b = 0;
//	scanf ("%lf %lf", &a, &b);
//	printf("%.2lf, %.2lf", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int h;
//	double w;
//	char n;
//
//	printf("Ű�� �Է��ϼ���.");
//	scanf("%d", &h);
//
//	printf("�����Ը� �Է��ϼ���.");
//	scanf("%lf", &w);
//
//	//getchar();
//	printf("�̸��� �Է��ϼ���");
//	scanf(" %c", &n);
//	
//
//	printf("Ű = %d \n������ = %.1lf \n�̸� = %c", h, w, n);
//
//	return 0;
//
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int n1, n2, n3, n4, n5 ;
//
//	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
//	n1 += 3;
//	n2 -= 3;
//	n3 *= 3;
//	n4 /= 3;
//	n5 %= 3;
//	printf("%d, %d, %d, %d, %d", n1, n2, n3, n4, n5);
//	
//	//printf("%d, %d, %d, %d, %d", n1 + 3, n2 - 3, n3 * 3, n4 / 3, n5 % 3);
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a, b;
//	printf("�ֻ����� ���� ����� �Է��ϼ���\n");
//	scanf("%d %d", &a, &b);
//
//	if (a >= 4b >= 4)
//	{
//		printf("\"�̰���ϴ�\"");
//	}
//	else if (a >= 4 || a >= 4)
//	{
//		printf("\"�����ϴ�\"");
//	}
//	else if (a <= 4, b <= 4)
//	{
//		printf("\"�����ϴ�\"");
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a, b, c;
//	printf("�� �����Է��ϼ���\n");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b && a > c)
//	{
//		printf("���� ū ����: %d", a);
//	}
//	else if (b > a && b > c)
//	{
//		printf("���� ū ����: %d", b);
//	}
//		
//	else if (c > a && c > b)
//	{
//		printf("���� ū ����: %d", c);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("���ϴ� �� ���ÿ�(1.���� 2.���� 3.����)\n");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1: printf("����");	break;
//	case 2: printf("����"); break;
//	case 3:	printf("����");	break;
//	default: printf("����");
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	char a;
//	printf("���ڸ� �Է��ϼ��� \n");
//	scnaf("%c", &a);
//	
//	if (a >= 'A' && a <= 'Z')
//	{
//		printf("%c�� �빮�� �Դϴ�", a);
//	}
//	else if (a >= 'a' && a <= 'z')
//	{
//		printf("%c�� �ҹ��� �Դϴ�", a);
//	}
//	else if (a >= '0' && a <= '9')
//	{
//		printf("%c�� ���� �Դϴ�", a);
//	}
//	else
//	{
//		printf("%c�� ��Ÿ ���� �Դϴ�", a);
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int n, n1;
//	char a;
//
//	printf("�� ���� �Է��ϼ���:\n");
//	scanf("%d %d", &n, &n1);
//	getchar();
//	printf("��� �����ڸ� �Է��ϼ���:\n");
//	scanf("%c", &a);
//	
//	if (a == '+')
//	{
//		printf("%d", n + n1);
//	}
//	else if (a == '-')
//	{
//		printf("%d", n - n1);
//	}
//	else if (a == '*')
//	{
//		printf("%d", n * n1);
//
//	}
//	else if (a == '/')
//	{
//		printf("%d", n / n1);
//	}
//	else
//	{
//		printf("�������� �ʽ��ϴ�");
//	}
//	return 0;
//}


//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int n, n1;
//	char a;
//
//	printf("�� ���� �Է��ϼ���:\n");
//	scanf("%d %d", &n, &n1);
//	getchar();
//	printf("��� �����ڸ� �Է��ϼ���:\n");
//	scanf("%c", &a);
//	switch (a)
//	{
//	case '+': 
//	{
//		printf("%d", n + n1);
//		break;
//	}
//	case '-':
//	{
//		printf("%d", n - n1);
//		break;
//	}
//	case '*':
//	{
//		printf("%d", n * n1);
//		break;
//	}
//	case '/':
//	{
//		printf("%d", n / n1);
//		break;
//	}
//	default : break;
//
//	return 0;
//	}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a, b, c;
//	printf("�� ���� ���̸� ���� �ۼ��ϼ���\n");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a + b > c && a + c > b)
//	{
//		printf("�ﰢ���� �˴ϴ�");
//	}
//	else if (b + c > a && b + a > c)		
//	{
//		printf("�ﰢ���� �˴ϴ�");
//	}
//	else if (c + a > b && c + b > a)
//	{
//		printf("�ﰢ���� �˴ϴ�");
//	}
//	else
//	{
//		printf("�ﰢ���� �ƴմϴ�");
//	}
//
//	return 0;
//}

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	printf("�� ���� ���̸� ���� �ۼ��ϼ���\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		printf("�ﰢ���� �˴ϴ�");
	}
	else
	{
		printf("�ﰢ���� �ƴմϴ�");
	}

	return 0;
}
