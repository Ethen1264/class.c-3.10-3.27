//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5; j++)		//1 5*5
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)		//2 �����ﰢ��
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = i; j <= 5; j++)		//3 �����ﰢ�� ������ ���
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int k;
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (k = i; k <= 4; k++)		//4 ���� �����ﰢ��
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int k;
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (k = 1; k <= i; k++)		//5 �տ� ���� �����ﰢ�� ������
//		{
//			printf(" ");
//		}
//		for (j = i; j <= 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int k;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (k = i; k <= 4; k++)		//6 �Ƕ�̵�
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i*2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int k;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (k = 1; k <= i; k++)
//		{
//			printf(" ");
//		}
//		for (j = i*2; j <= 8; j++)		//7 ���Ƕ�̵�
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int k;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (k = i; k < 4; k++)		
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i*2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 5; i++)
//			{
//				for (k = 0; k <= i; k++)			//8 ������
//				{
//					printf(" ");
//				}
//				for (j = i*2; j <= 6; j++)		
//				{
//					printf("*");
//				}
//				printf("\n");
//			}
//
//	return 0;
//}

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int a;
//	int b=1;
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)		//9  ���� ���� �ﰢ��
//		{
//			printf("%d ", b++);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int a;
//	char b = 'A';
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)		//10 ���ĺ� ���� �ﰢ��
//		{
//			printf("%c ", b++);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int k;
//	char a='a';
//	int b=1;
//	for (i = 1; i <= 5; i++)
//	{
//		for (k = 1; k <= i; k++)		//11
//		{
//			printf(" ");
//		}
//		for (j = i; j <= 3; j++)
//		{
//			printf("%d", b++);
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 4; i++)	
//	{
//		for (j = 1; j <= i; j++)		
//		{
//			printf("%c",a++);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//

//#include<stdio.h>
//#pragma warning(disable:4996)			//12
//int main()
//{



//#include<stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i;
//	int j;
//	int k;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (k = 1; k <= i; k++)
//		{
//			printf(" ");
//		}
//		for (j = i*2; j <= 4; j++)		//7 ���Ƕ�̵�
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 5; i++)
//			{
//				for (k = i; k <= 4; k++)		//13
//				{
//					printf(" ");
//				}
//				for (j = 0; j <= i*2; j++)
//				{
//					printf("*");
//				}
//				printf("\n");
//			}
//
//	return 0;
//}

