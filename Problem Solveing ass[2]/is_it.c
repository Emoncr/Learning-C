#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = n; i <= n; i--)
        {
            printf("%d ", i);
            if (i == 0)
            {
                break;
            }
        }
    }
    return 0;
}