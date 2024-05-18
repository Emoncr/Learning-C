#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    int number_2 = 0, number_3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (ary[i] % 2 == 0)
        {
            number_2++;
        }
        else if (ary[i] % 3 == 0 && ary[i] % 2 != 0)
        {
            number_3++;
        }
    }
    printf("%d %d", number_2, number_3);
    return 0;
}