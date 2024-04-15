#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N != 1)
    {
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}