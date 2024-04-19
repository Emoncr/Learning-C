#include <stdio.h>
int main()
{
    int n, aryValues;
    scanf("%d", &n);
    int ary[n];

    // Taking input for array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &aryValues);
        ary[i] = aryValues;
    }

    // Loop on array
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0) // checking is idx odd or not
        {
            printf("%d ", ary[i]);
        }
    }

    return 0;
}