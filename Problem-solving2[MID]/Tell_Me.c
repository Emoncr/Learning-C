#include <stdio.h>
int main()
{
    int nmbr_test_case;
    scanf("%d", &nmbr_test_case);
    for (int i = 1; i <= nmbr_test_case; i++)
    {
        int n;
        scanf("%d", &n);
        int ary[n];
        int result = 1;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ary[j]);
        }
        int x;
        scanf("%d", &x);
        for (int k = 0; k < n; k++)
        {
            if (ary[k] == x)
            {
                result = 1;
                break;
            }
            else if (ary[k] != x)
            {
                result = 0;
            }
        }
        // OUTPUT OF RESULT
        if (result == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}