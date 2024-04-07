#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    int value = X;
    if (value >= 65 && value <= 90)
    {
        value = value + 32;
        printf("%c", value);
    }
    else
    {
        value = value - 32;
        printf("%c", value);
    }

    return 0;
}