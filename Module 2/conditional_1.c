#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Burger Khabo");
    }
    else if (tk > 50)
    {
        printf("Fuchka khabo");
    }
    else
    {
        printf("Taka nai");
    }

    return 0;
}