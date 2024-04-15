#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = INT_MIN;
    int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}