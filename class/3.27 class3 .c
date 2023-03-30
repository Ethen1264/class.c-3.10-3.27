/*윤년 = 29일 까지 있는 날 
4로 나누너 떨어지는 년도 == 윤년 && 100으로 떨어지지 않는 년도 
400으로 나누어 떨어지는 날은 윤년 */


//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("년도를 입력하세요:");
//	scanf_s("%d", &year);
//
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("윤년 입니다 ");
//	}
//	else
//	{
//		printf("윤년이 아닙니다");
//	}
//	return 0;
//}


#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int time, score;
	int i;

	printf("현재 경기 시간을 입력하세요: ");
	scanf("%d", &time);
	printf("현재 점수를 입력하세요:");
	scanf("%d", &score);

	for (i = time; i <= 90; i = i + 5)			//홈 워크 축구의 신 1 : 1165
	{
		score++;
	}

	printf("경기 종료 후 득점: %d", score);

	return 0;
}