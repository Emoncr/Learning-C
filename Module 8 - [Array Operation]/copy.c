#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ary1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary1[i]);
    }

    int m;
    scanf("%d", &m);
    int ary2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ary2[i]);
    }

    int ans[m + n];
    for (int i = 0; i < m + n; i++)
    {
        ans[i] = ary1[i];
    }

    int j = n;
    for (int i = 0; i < m; i++)
    {
        ans[j] = ary2[i];
        j++;
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}