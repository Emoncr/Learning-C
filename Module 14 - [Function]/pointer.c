#include <stdio.h>
int main()
{
    int value = 10;
    int *pointer = &value;
    printf("%d\n", *pointer); // derefference
    *pointer = 50;
    printf("%d", value);

    return 0;
}