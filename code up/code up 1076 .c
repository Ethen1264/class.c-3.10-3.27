#include<stdio.h>
int main()
{
	char a = 'a';
	char b;
	scanf("%c", &b);
	do {
		
	printf("%c ", a);
	a++;
	} while (a <= b);

	return 0;
}