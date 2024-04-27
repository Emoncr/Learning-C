#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    int min_number = INT_MAX, max_number = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (min_number >= ary[i])
        {
            min_number = ary[i];
        }
        if (max_number <= ary[i])
        {
            max_number = ary[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ary[i] == min_number)
        {
            ary[i] = max_number;
        }
        else if (ary[i] == max_number)
        {
            ary[i] = min_number;
        }
        printf("%d ", ary[i]);
    }
    return 0;
}