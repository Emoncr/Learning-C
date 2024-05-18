#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int palindrome_flag = 1;
    int str_len = strlen(str);
    int i = 0, j = str_len - 1; // starting and ending index of string
    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindrome_flag = 0; // if any of one dosen't match set flag 0
        }
        i++;
        j--;
    }

    return palindrome_flag;
}

int main()
{
    char s[1000];
    scanf("%s", s);
    int check_palindrome = is_palindrome(s);
    if (check_palindrome)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}