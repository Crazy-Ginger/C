#include <stdio.h>
#include <stdlib.h>

void quest1()
{
    int *point;
    point = (int*) malloc(10000* sizeof(int));
    for (int i = 0; i <10000; i++)
    {
        *(point+i) = i;
    }
    for (int i = 0; i <10000; i++)
    {
        printf("%d: %d\n", i, *(point+i));
    }
    free(point);
}

void quest2()
{

}

int main()
{
    quest1();
    return 0;
}
