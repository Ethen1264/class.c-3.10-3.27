//#include <stdio.h>
// #pragma warning(disable:4996)
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	if (a > 10)
//		printf("10���� ū ���� �Է��ϼ���");		//1
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
//		printf("ū�� : %d ������ %d", a, b);		//2
//	else
//		printf("ū�� : %d ������ %d", b, a);
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
//		printf("�հ��Դϴ�");
//	else
//		printf("���հ��Դϴ�");				//3
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
//		printf("�Էµ� ������ ¦���Դϴ�\n");
//	else if (a % 2 == 1)
//		printf("�Էµ� ������ Ȧ���Դϴ�\n");		//4-1
//	if (b % 2 == 0)
//		printf("�Էµ� ������ ¦���Դϴ�\n");
//	else if (b % 2 == 1)
//		printf("�Էµ� ������ Ȧ���Դϴ�\n");
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
//	printf("�����Է� >");
//	scanf("%d", &a);
//
//	switch (a/10)
//	{
//	case 9: printf("��"); break;
//	case 8: printf("��"); break;				//5
//	case 7: printf("��"); break;
//	case 6: printf("��"); break;
//	case 5: printf("��"); break;
//	default: printf("����̾簡�� ���Ե��� ����");	
//	
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a;
//	printf("�����Է� >");
//	scanf_s("%d", &a);
//
//	if (a >= 90)
//		printf("��");
//	else if (a >= 80)
//		printf("��");
//	else if (a >= 70)
//		printf("��");
//	else if (a >= 60)					//5-(1)
//		printf("��");
//	else if (a >= 50)
//		printf("��");
//	else
//		printf("����̾簡�� ���Ե��� �ʽ��ϴ�");
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
//	printf("�����Է� >");
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
//	printf("1.����\n2.����\n3.����\n���ڸ� �Է��ϼ���\n");
//	scanf("%d", &a);
//
//	switch (a) 
//	{
//	case 1: printf("����"); break;		//2
//	case 2: printf("����"); break;
//	case 3: printf("����"); break;
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
//	printf("Ű�� �Է��ϼ���:\n");
//	scanf("%d", &a);
//	printf("���̸� �Է��ϼ���\n");		//3
//	scanf("%d", &b);
//
//	if (a >= 140 && b >= 10)
//		printf("Ÿ�� �����ϴ�");
//	else if (a <= 140 && b <= 10)
//		printf("Ÿ�� �ȵ˴ϴ�");
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int time;
//	int age;
//	printf("�ð��� �Է��ϼ���");
//	scanf("%d", &time);
//	printf("���̸� �Է��ϼ���");			//4
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
//		printf("�����͸� �Է��ϼ���\n");		//3
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
//		printf("������ ���� �Է��ϼ���(L):");
//		scanf("%d", &oil);
//
//		printf("������ �Ÿ��� �Է��ϼ���(Km): ");
//		scanf("%d", &km);
//
//		printf("����� %dKm/L�Դϴ�\n", km / oil);		//4
//
//		printf("�ٽ� ����ϰڽ��ϱ�?(Y/N):");
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
//	printf("�� ���� ���ڿ��� �Է��Ͻÿ�: ");
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
//	printf("�� ���� ���ڿ��� �Է��Ͻÿ�: ");
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
//	printf("��� %d\n", a);
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
//	printf("�� ���� �Է��ϼ���: ");		// 10 �������;;
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
//		printf("���̸Ӱ� �����ϴ� ���� �Է��ϼ���\n");
//		scanf("%d", &num1);													// 1
//		if (num1 > count)
//		{
//			printf("�ٿ�\n");
//			
//		}
//		else if (num1 < count)
//		{
//			printf("��\n");
//		
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
//	printf("��� %d\n", a);
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
//		printf("�������̴�");												//2
//
//	else if (j != a)
//		printf("�������� �ƴϴ�");
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
//	printf("���� �Է��ϼ���");
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
//		printf("ȸ�������̴�");											//3
//	}
//	else
//	{
//		printf("ȸ�����ڰ� �ƴϴ�");
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

	printf("���� �Է��ϼ���");
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

		printf("���� �Է��ϼ���");
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