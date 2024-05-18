#include <stdio.h>
int main()
{
    int array[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}