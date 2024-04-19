#include <stdio.h>
int main()
{
    int n, nums, posativeSum = 0, negativeSum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &nums);
        if (nums > 0)
        {
            posativeSum = posativeSum + nums;
        }
        else if (nums < 0)
        {
            negativeSum = negativeSum + nums;
        }
    }

    printf("%d %d", posativeSum, negativeSum);

    return 0;
}