#include <stdio.h>

void sum(int x, int y)
{
    int plus = x + y;
    printf("%d", plus);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    sum(x, y);
    return 0;
}