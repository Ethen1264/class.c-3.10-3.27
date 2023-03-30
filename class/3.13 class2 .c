#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	/*int i;

	printf("숫자를 입력하세요:\n");
	scanf("%d", &i);
	printf("숫자:%d\n", i);
	getchar();
	
	char ch;
	printf("알파벳을 입력하세요:\n");
	scanf("%c", &ch);
	printf("알파벳:%c\n", ch);

	int num1, num2, sum = 0;
	printf("두 정수를 입력하세요:\n");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("합: %d\n", sum);

	sum = 0
	sum += num1;
	sum += num2;
	printf("sum : %d\n", sum);*/
	
	// 빛의 속도 1초에 300000
	// 거리 149600000

	double distance = 300000;
	double speed = 149600000;
	double time;
	time = distance / speed;

	printf("빛의 속도: %.f Km/s\n", distance);
	printf("태양과 지구와의 거리: %.f Km\n", speed);
	printf("도달시간: %f초\n", time);


	//5. 태양빛이 도달한 초는 몇분 몇초인가
	int temp = (int)time;
	int m, s;
	m = temp / 60;
	s = temp % 60;
	printf("%d초는 %d분 %d초 입니다", temp, m, s);

	
	return 0;
}