//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int n;
//
//	printf("�Ѱ��� ������ �Է��ϼ���:");
//	scanf("%d", &n);
//	printf("�Է� ���� �� %d\n", n);
//	if (n > 10)
//	{
//		printf("10���� ū ���� �Է��ϼ̽��ϴ�");
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a, b, temp;
//	printf("�� ���� �Է��ϼ���");
//	scnaf("%d %d", &a, &b);													�ٽ� Ǯ ����
//
//	if ("a > b")
//	{
//		printf("%d, %d"
//	}
//
//	return 0;
//}


//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("������ �Է��ϼ���");
//	scanf("%d", &a);
//
//	if (a >= 80)
//	{
//		printf("�հ�");
//	}
//	else
//	{
//		printf("���հ�");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("������ �Է��ϼ���");
//	scanf("%d", &a);
//	
//	if (a == 100)
//	{
//		printf("A");
//	}
//	else if (a == 90)
//	{
//		printf("A");
//	}
//	else if (a == 80)
//	{
//		printf("B");
//	}
//	else if (a == 70)
//	{
//		printf("C");
//	}
//	else if (a == 60)
//	{
//		printf("D");
//	}
//	else if (a <= 50)
//	{
//		printf("F");
//	}
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int score;
//	scanf("%d", &score);
//	switch (score / 10)
//	{
//	case 10: 
//	case 9:
//		printf("A\n");
//			break;
//	case 8:
//		printf("B\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	default:
//		printf("F\n");
//	}
//
//	//���� �Է��ϸ� ������ 30, 31, 28
//
//	return 0;
//}
//

#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int month, day, year;
	while (1)
	{
		printf("month (����: -1) >>");
		scanf("%d", &month);
		if (month == -1)
			break;
		else if (month < 1 || month > 12) {
			printf("�߸��� �Է� �Դϴ�.\n");
		}
		else {
			switch (month) {
			case 2:
				printf("year >>");
				scanf("%d", &year);
				if ((year % 4) == 0 && (year % 100) != 0 || (year % 4) == 0)
					day = 29;
				else
					day = 28;
				break;
			case 4: case 6: case 9: case 11:
				day = 30;
				break;
			default:
				day = 31;
			}
			printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", month, year);
		}
	}
	
	return 0;
}