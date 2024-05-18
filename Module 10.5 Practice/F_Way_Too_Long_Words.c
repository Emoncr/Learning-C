#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s);
        int string_length = strlen(s);
        if (string_length > 10)
        {
            int middleChar = string_length - 2;
            printf("%c%d%c\n", s[0], middleChar, s[string_length - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }

    return 0;
}