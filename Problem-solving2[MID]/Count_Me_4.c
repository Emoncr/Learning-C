#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        int count[] = {0};
        int value = s[i];
        count[value]++;

        printf("%c - %d\n", s[i], count[value]);
    }

    return 0;
}