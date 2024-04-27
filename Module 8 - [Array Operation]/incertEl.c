
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ary[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    int pos, value;
    scanf("%d %d", &pos, &value);
    for (int i = n; i > pos; i--)
    {
        ary[i] = ary[i - 1];
    }
    ary[pos] = value;
    printf("%d", ary[pos]);

    return 0;
}