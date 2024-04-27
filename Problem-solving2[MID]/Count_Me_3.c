#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s",s);
        int capital = 0, lowercase = 0, digit = 0;

        for (int j = 0; j <= strlen(s); j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                capital++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                lowercase++;
            }
            else if (s[j] >= 48 && s[j] <= 57)
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, lowercase, digit);
    }

    return 0;
}