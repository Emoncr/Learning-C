#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // For Output of sum
    int sum = num1 + num2;
    printf("%d\n", sum);

    // For Output of Substraction
    int sub = num1 - num2;
    printf("%d\n", sub);

    // For Output of Multplication
    int mult = num1 * num2;
    printf("%d\n", mult);


    // For Output of Divition
    double div1 = (double)num1 / num2;  // Way 1
    printf("%0.2lf\n", div1);

    int div2 = num1* 0.1 / num2;  // Way 2
    printf("%0.2f", div2);


    return 0;
}