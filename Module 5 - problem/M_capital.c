#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X >= 48 && X <= 57) // Checking Is digit or not
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        int value = X;
        if (value >= 65 && value <= 90) // Checking Capital or not
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }

    return 0;
}