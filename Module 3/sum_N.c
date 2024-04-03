#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int sum = 0;
    int i;
    for (i = 1; i <= number; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}