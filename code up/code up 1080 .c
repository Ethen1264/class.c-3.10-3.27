#include <stdio.h>


int main(void)
{

    int num;
    int i = 0;
    int sum = 0;
    scanf("%d", &num);
    while (1) {
        i++;
        sum += i;
        if (sum >= num)
        {
            break;
        }
    }
    printf("%d", i);
    return 0;
}