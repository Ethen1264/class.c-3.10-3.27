#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	/*int i;

	printf("���ڸ� �Է��ϼ���:\n");
	scanf("%d", &i);
	printf("����:%d\n", i);
	getchar();
	
	char ch;
	printf("���ĺ��� �Է��ϼ���:\n");
	scanf("%c", &ch);
	printf("���ĺ�:%c\n", ch);

	int num1, num2, sum = 0;
	printf("�� ������ �Է��ϼ���:\n");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("��: %d\n", sum);

	sum = 0
	sum += num1;
	sum += num2;
	printf("sum : %d\n", sum);*/
	
	// ���� �ӵ� 1�ʿ� 300000
	// �Ÿ� 149600000

	double distance = 300000;
	double speed = 149600000;
	double time;
	time = distance / speed;

	printf("���� �ӵ�: %.f Km/s\n", distance);
	printf("�¾�� �������� �Ÿ�: %.f Km\n", speed);
	printf("���޽ð�: %f��\n", time);


	//5. �¾���� ������ �ʴ� ��� �����ΰ�
	int temp = (int)time;
	int m, s;
	m = temp / 60;
	s = temp % 60;
	printf("%d�ʴ� %d�� %d�� �Դϴ�", temp, m, s);

	
	return 0;
}