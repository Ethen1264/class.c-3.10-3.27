//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	if (a > 10)
//		printf("10보다 큰 수를 입력하세요");		//1
//
//	return 0;
//}

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("큰수 : %d 작은수 %d", a, b);		//2
//	else
//		printf("큰수 : %d 작은수 %d", b, a);
//
//	return 0;
//}

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (0 > a)
//	{
//		printf("%d", a * -1);					//2-1
//	}
//	else if (0 < 2)
//		printf("%d", a);
//
//	return 0;
//}

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	char a;
//	scanf_s("%c", &a);						//2-2
//	printf("%c", a - 32);
//
//	return 0;
//}

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 80)
//		printf("합격입니다");
//	else
//		printf("불합격입니다");				//3
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a,b;
//	scanf("%d", &a);
//	if (a >= 20)
//		printf("adult");
//	else if (a < 20)
//		b = 20 - a;
//		printf("%d years later", b);		//4
//
//	return 0;
//}

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a % 2 == 0)
//		printf("입력된 정수를 짝수입니다\n");
//	else if (a % 2 == 1)
//		printf("입력된 정수는 홀수입니다\n");		//4-1
//	if (b % 2 == 0)
//		printf("입력된 정수를 짝수입니다\n");
//	else if (b % 2 == 1)
//		printf("입력된 정수는 홀수입니다\n");
//	
//}


//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);					//4-2
//	if (a > b)
//		printf("%d", a - b);
//	else if (a < b)
//		printf("%d", b - a);
//
//	return 0;
//}

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("정수입력 >");
//	scanf("%d", &a);
//
//	switch (a/10)
//	{
//	case 9: printf("수"); break;
//	case 8: printf("우"); break;				//5
//	case 7: printf("미"); break;
//	case 6: printf("양"); break;
//	case 5: printf("가"); break;
//	default: printf("수우미양가에 포함되지 않음");	
//	
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("정수입력 >");
//	scanf_s("%d", &a);
//
//	if (a >= 90)
//		printf("수");
//	else if (a >= 80)
//		printf("우");
//	else if (a >= 70)
//		printf("미");
//	else if (a >= 60)					//5-(1)
//		printf("양");
//	else if (a >= 50)
//		printf("가");
//	else
//		printf("수우미양가에 포함되지 않습니다");
//	return 0;
//}
//---------------------------------------------------------------
// 
// 
// 
//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("점수입력 >");
//	scanf("%d", &a);
//
//	if (a >= 90)
//		printf("A");
//	else if (a >= 80)
//		printf("B");					//1
//	else if (a >= 70)
//		printf("C");
//	else if (a >= 60)
//		printf("D");
//	else if (a <= 60)
//		printf("E");
//	return 0;
//}

//---------------------------------------------------------------------------------------------------------------------------

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a;
//	scanf("%d", &a);
//
//	switch (a/10)
//	{
//	case 9: printf("A"); break;			//1-(1)
//	case 8: printf("B"); break;
//	case 7: printf("C"); break;
//	case 6: printf("D"); break;
//	default: printf("E");
//	
//	}
//	return 0;
//}

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("1.삽입\n2.수정\n3.삭제\n숫자를 입력하세요\n");
//	scanf("%d", &a);
//
//	switch (a) 
//	{
//	case 1: printf("삽입"); break;		//2
//	case 2: printf("수정"); break;
//	case 3: printf("삭제"); break;
//
//	}
//	return 0;
//}

//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a;
//	int b;
//
//	printf("키를 입력하세요:\n");
//	scanf("%d", &a);
//	printf("나이를 입력하세요\n");		//3
//	scanf("%d", &b);
//
//	if (a >= 140 && b >= 10)
//		printf("타도 좋습니다");
//	else if (a <= 140 && b <= 10)
//		printf("타면 안됩니다");
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int time;
//	int age;
//	printf("시간을 입력하세요");
//	scanf("%d", &time);
//	printf("나이를 입력하세요");			//4
//	scanf("%d", &age);
//
//	if (time <= 17)
//	{
//		if (age >= 0 && age <= 2)
//			printf("0");
//		else if ((age > 2 && age <= 12) || (age >= 65))
//			printf("25000");
//		else
//			printf("34000");
//	}
//	if (time > 17)
//		printf("10000");
//
//	return 0;
//}
// ---------------------------------------------------------------------
//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 0;
//	for (i = 10; i > 6; i--)			//1
//		printf("%d\n", i);
//
//	return 0;
//}
//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)			//2
//		if (i % 3==0)
//			printf("%d\n", i);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 1;
//	while (i <= 100)	
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);			//2-(1)
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 1;
//	int temp = 1;
//	while (i != 0)
//	{
//		printf("데이터를 입력하세요\n");		//3
//		scanf("%d", &i);
//
//
//		if (i < temp)
//			temp = i;
//		
//	}
//	printf("%d", temp);
//	return 0;
//	
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//
//	int oil, km;
//	char a;
//
//	do {
//
//
//		printf("연료의 양을 입력하세요(L):");
//		scanf("%d", &oil);
//
//		printf("주행한 거리를 입력하세요(Km): ");
//		scanf("%d", &km);
//
//		printf("연비는 %dKm/L입니다\n", km / oil);		//4
//
//		printf("다시 계산하겠습니까?(Y/N):");
//		scanf(" %c", &a);
//
//	} while (a == 'Y');
//
//	return 0;
//	
//
//	
//}

//
//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	char ch;
//	int cnt = 0;
//
//	printf("한 줄의 문자열을 입력하시오: ");
//	while ((ch = getchar()) != '\n')
//	{
//		
//		if (ch <= 'z' && ch >= 'a')					//5
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
//int main()
//{
//	char ch;
//	int cnt = 0;
//
//	printf("한 줄의 문자열을 입력하시오: ");
//	while ((ch = getchar()) != '\n')
//	{
//
//		if (ch == 'a')								//6
//			cnt++;
//	}
//
//	printf("%d", cnt);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a = 10;
//	int i;
//	int sum=0;
//	for (i = 1; i <= a; i++)					//7
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//
//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a = 10;
//	int i;
//	int sum = 1;
//
//	for (i = 1; i <= 10; i++)					//8
//	{
//		sum *= i;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int cnt=0;
//	int a;
//	scanf("%d", &a);
//
//	printf("약수 %d\n", a);
//
//	for (i = 1; i <= a; i++)
//	{
//		if (a % i == 0)
//		{
//			printf("%d ", i);				//9
//			cnt++;
//		}
//	}
//	printf("\n");
//	printf("%d", cnt);
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a, b;
//	int Max, Min;
//	int i, j;
//
//	printf("두 수를 입력하세요: ");		// 10 어려워서;;
//	scanf("%d %d", &a, &b);
//	for("")
//}

//--------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//
//	int count;
//	srand(time(NULL));
//	count = rand() % 100 + 1;
//	int num1;
//	do {
//		printf("게이머가 생각하는 수를 입력하세요\n");
//		scanf("%d", &num1);													// 1
//		if (num1 > count)
//		{
//			printf("다운\n");
//			
//		}
//		else if (num1 < count)
//		{
//			printf("업\n");
//		
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


//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j = 0;
//	int sum = 0;
//	int a;
//	scanf("%d", &a);
//
//	printf("약수 %d\n", a);
//
//	for (i = 1; i <= a; i++)
//	{
//		if (a % i == 0)
//		{
//			printf("%d ", i);
//			sum += i;	
//			
//		}
//	}
//	j = sum - a;
//	printf("\n");
//	if (j == a)
//		printf("완전수이다");												//2
//
//	else if (j != a)
//		printf("완전수가 아니다");
//
//	return 0;
//}


//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	int i, j = 1, sum;
//	int temp=0;
//
//	printf("수를 입력하세요");
//	scanf("%d", &a);
//	i = a;
//
//	while (j <= i)
//	{
//		j = j * 10;
//		sum = a % 10;
//		a = a / 10;
//		temp = temp * 10 + sum;
//
//		
//	}
//	if (i == temp)
//	{
//		printf("회문숫자이다");											//3
//	}
//	else
//	{
//		printf("회문숫자가 아니다");
//	}
//	return 0;
//}


#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	int i, j = 1, sum;
	int temp=0;

	printf("수를 입력하세요");
	scanf("%d", &a);
	i = a;

	while (j <= i)
	{
																	//4

		
	}

#include <stdio.h>
#pragma warning(disable:4996)
	int main()
	{
		int a;
		int i, j = 1, sum;
		int temp = 0;

		printf("수를 입력하세요");
		scanf("%d", &a);
		i = a;

		while (j <= i)
		{
			j = j * 10;
			sum = a % 10;
			a = a / 10;
			temp = temp * 10 + sum;								//5


		}
	}