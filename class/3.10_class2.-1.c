

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("첫 수를 입력하세요\n");
    scanf_s("%d", &a);
    printf("두 수를 입력하세요\n");
    scanf_s("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %d b = %d\n", a, b);
    




    int num1, num2;

    printf("첫 수를 입력하세요\n");
    scanf_s("%d", &num1);
    printf("두 수를 입력하세요\n");
    scanf_s("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);

    return 0;
}



