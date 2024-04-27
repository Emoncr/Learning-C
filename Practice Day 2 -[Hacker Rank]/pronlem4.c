#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);

    long long int B;
    scanf("%lld", &B);

    float C;
    scanf("%f", &C);

    char D;
    scanf("%c", &D);

    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%0.2f\n", C);
    printf("%c\n", D);
    return 0;
}