#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    scanf("%s", a);
    // int i = 0, count = 0;

    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    int count = strlen(a);

    printf("%d", count);
    return 0;
}