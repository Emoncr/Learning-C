#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int contsonent_count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            continue;
        }
        contsonent_count++;
    }
    printf("%d", contsonent_count);
    return 0;
}