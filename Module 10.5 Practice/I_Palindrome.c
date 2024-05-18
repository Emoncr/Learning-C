#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    fgets(s, sizeof(s), stdin);

    int palindrome = 1, i = 0, j = strlen(s) - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (palindrome==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
