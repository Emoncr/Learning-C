#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int value;
    scanf("%d", &value);
    int isEqual = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == value)
            {
                isEqual = 1;
                printf("value1- %d, value2- %d\n", arr[i], arr[j]);
                break;
            }
        }
        if (isEqual)
        {
            break;
        }
    }

    if (isEqual)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}