#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int result = sum(10, 20);
    printf("%d", result);
    return 0;
}