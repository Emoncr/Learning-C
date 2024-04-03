#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int i;
    for (i = 1; i <= number; i = i + 1)
    {
        if (i % 2 != 0)
        {
            printf("%d -ODD Value \n", i);
        }
        else
        {
            printf("%d -Even Value \n", i);
        }
    }
    return 0;
}