#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if (number > 0)
    {
        printf("POSITIVE");
    }
    else if (number < 0)
    {
        printf("NEGATIVE");
    }
    else
    {
        printf("ZERO");
    }
    return 0;
}