/*���� = 29�� ���� �ִ� �� 
4�� ������ �������� �⵵ == ���� && 100���� �������� �ʴ� �⵵ 
400���� ������ �������� ���� ���� */


//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("�⵵�� �Է��ϼ���:");
//	scanf_s("%d", &year);
//
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("���� �Դϴ� ");
//	}
//	else
//	{
//		printf("������ �ƴմϴ�");
//	}
//	return 0;
//}


#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int time, score;
	int i;

	printf("���� ��� �ð��� �Է��ϼ���: ");
	scanf("%d", &time);
	printf("���� ������ �Է��ϼ���:");
	scanf("%d", &score);

	for (i = time; i <= 90; i = i + 5)			//Ȩ ��ũ �౸�� �� 1 : 1165
	{
		score++;
	}

	printf("��� ���� �� ����: %d", score);

	return 0;
}