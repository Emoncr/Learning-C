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
    int index, value; // Intializing variable after array input
    scanf("%d %d", &index, &value);

    ary[index] = value;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}