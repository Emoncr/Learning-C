// #include <stdio.h>
// int main()
// {
//     int x;
//     int correct_pass = 1999;
//     for (int i = 1000; i <= 9999; i++)
//     {
//         scanf("%d", &x);
//         if (x == correct_pass)
//         {
//             printf("Correct");
//             break;
//         }
//         else
//         {
//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        if (x == 1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}