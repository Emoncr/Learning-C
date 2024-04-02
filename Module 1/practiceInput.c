#include <stdio.h>

int main()
{
    int rohim, korim;
    char p;
    float floot;
    scanf("%d%c %d%f", &rohim,&p, &korim,&floot);
    printf("%d%c %d%0.1f", rohim, p, korim, floot);
    return 0;
}