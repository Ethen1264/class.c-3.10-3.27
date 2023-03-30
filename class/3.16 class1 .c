//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int n;
//
//	printf("한개의 정수를 입력하세요:");
//	scanf("%d", &n);
//	printf("입력 받은 수 %d\n", n);
//	if (n > 10)
//	{
//		printf("10보다 큰 수를 입력하셨습니다");
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a, b, temp;
//	printf("두 수를 입력하세요");
//	scnaf("%d %d", &a, &b);													다시 풀 문제
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
//	printf("점수를 입력하세요");
//	scanf("%d", &a);
//
//	if (a >= 80)
//	{
//		printf("합격");
//	}
//	else
//	{
//		printf("불합격");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("점수를 입력하세요");
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
//	//월을 입력하면 마지막 30, 31, 28
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
		printf("month (종료: -1) >>");
		scanf("%d", &month);
		if (month == -1)
			break;
		else if (month < 1 || month > 12) {
			printf("잘못된 입력 입니다.\n");
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
			printf("%d일은 %d일까지 있습니다.\n", month, year);
		}
	}
	
	return 0;
}