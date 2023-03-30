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
//	printf("키를 입력하세요.");
//	scanf("%d", &h);
//
//	printf("몸무게를 입력하세요.");
//	scanf("%lf", &w);
//
//	//getchar();
//	printf("이름을 입력하세요");
//	scanf(" %c", &n);
//	
//
//	printf("키 = %d \n몸무게 = %.1lf \n이름 = %c", h, w, n);
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
//	printf("주사위를 던진 결과를 입력하세요\n");
//	scanf("%d %d", &a, &b);
//
//	if (a >= 4b >= 4)
//	{
//		printf("\"이겼습니다\"");
//	}
//	else if (a >= 4 || a >= 4)
//	{
//		printf("\"비겼습니다\"");
//	}
//	else if (a <= 4, b <= 4)
//	{
//		printf("\"졌습니다\"");
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a, b, c;
//	printf("세 수를입력하세요\n");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b && a > c)
//	{
//		printf("가장 큰 수는: %d", a);
//	}
//	else if (b > a && b > c)
//	{
//		printf("가장 큰 수는: %d", b);
//	}
//		
//	else if (c > a && c > b)
//	{
//		printf("가장 큰 수는: %d", c);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("원하는 걸 고르시오(1.삽입 2.수정 3.삭제)\n");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1: printf("삽입");	break;
//	case 2: printf("수정"); break;
//	case 3:	printf("삭제");	break;
//	default: printf("종료");
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	char a;
//	printf("문자를 입력하세요 \n");
//	scnaf("%c", &a);
//	
//	if (a >= 'A' && a <= 'Z')
//	{
//		printf("%c는 대문자 입니다", a);
//	}
//	else if (a >= 'a' && a <= 'z')
//	{
//		printf("%c는 소문자 입니다", a);
//	}
//	else if (a >= '0' && a <= '9')
//	{
//		printf("%c는 숫자 입니다", a);
//	}
//	else
//	{
//		printf("%c는 기타 문자 입니다", a);
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
//	printf("두 수를 입력하세요:\n");
//	scanf("%d %d", &n, &n1);
//	getchar();
//	printf("산술 연산자를 입력하세요:\n");
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
//		printf("지원되지 않습니다");
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
//	printf("두 수를 입력하세요:\n");
//	scanf("%d %d", &n, &n1);
//	getchar();
//	printf("산술 연산자를 입력하세요:\n");
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
//	printf("세 변의 길이를 각각 작성하세요\n");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a + b > c && a + c > b)
//	{
//		printf("삼각형이 됩니다");
//	}
//	else if (b + c > a && b + a > c)		
//	{
//		printf("삼각형이 됩니다");
//	}
//	else if (c + a > b && c + b > a)
//	{
//		printf("삼각형이 됩니다");
//	}
//	else
//	{
//		printf("삼각형이 아닙니다");
//	}
//
//	return 0;
//}

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	printf("세 변의 길이를 각각 작성하세요\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		printf("삼각형이 됩니다");
	}
	else
	{
		printf("삼각형이 아닙니다");
	}

	return 0;
}
