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
    int del_pos;
    scanf("%d", &del_pos);

    for (int i = del_pos; i < n - 1; i++)
    {
        ary[i] = ary[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\n", ary[i]);
    }

    return 0;
}