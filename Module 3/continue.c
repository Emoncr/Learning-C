#include <stdio.h>
int main()
{
    int number, i;
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}