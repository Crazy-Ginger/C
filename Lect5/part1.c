#include <stdio.h>

void intswap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void quest1()
{
    int x = 3, y = 5;
    int *px = &x;
    int *py = &y;
    printf("%d\t%d\n", x, y);
    printf("%p\t%p\n", px, py);
    printf("%p\t%p\n", &x, &y);
    intswap(px, py);
    printf("%d\t%d\n", x, y);
    printf("%p\t%p\n", px, py);
    printf("%p\t%p\n", &x, &y);
}

void quest2()
{
    int arr[] = {1, 2, 3};
    int *p_arr = &arr[0];
    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]);
    intswap(p_arr, p_arr++);
    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]);
    intswap(p_arr, p_arr++);
    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]);
}

struct strawman
{
    int x,y;
};

void quest3()
{
    struct strawman straw;
    straw.x = 12;
    straw.y = 3;
    printf("%d\t%d\n", straw.x, straw.y);
    int *man = &straw.x;
    printf("%p\t%p\t%p\n", &straw, &straw.x, &straw.y);
    intswap(man, man++);
    printf("%d\t%d\n", straw.x, straw.y);
}


int main()
{
    quest3();
    return 0;
}
