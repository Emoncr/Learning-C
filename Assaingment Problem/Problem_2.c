#include <stdio.h>
int main()
{
    long long int A, B;             // Solved Code
    scanf("%lld %lld", &A, &B);

    // int A, B;                         // My Code
    // scanf("%d %d", &A, &B);

    long long int multiply = A * B;
    printf("%lld", multiply);

    return 0;
}