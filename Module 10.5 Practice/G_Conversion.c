#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    fgets(s, 100001, stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
        else if (s[i] >= 97 && s[i] <= 123)
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] == 44)
        {
            s[i] = s[i] - 12;
        }
        printf("%c", s[i]);
    }

    return 0;
}