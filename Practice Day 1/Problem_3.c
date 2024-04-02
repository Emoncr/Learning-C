#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num >= 0)
    {
        if (num % 2 == 0)
        {
            printf("This is Even Number");
        }
        else
        {
            printf("This is ODD Number");
        }
    }
    else
    {
        printf("You can't send negative value");
    }

    return 0;
}