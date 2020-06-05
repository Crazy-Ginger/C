#include <stdio.h>
#include <stdlib.h>

void part1()
{
    char c = getchar();
    putchar(c);
    putchar('\n');
}

void part2()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", abs(a -b));
}

void part3()
{
    int a;
    float b;
    scanf("%d", &a);
    scanf("%f", &b);
    printf("%f\n", a*b);
}


int main()
{
    part3();
    return 0;
}

