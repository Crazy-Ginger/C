#include <stdio.h>

void quest1()
{
    unsigned int x=9;
    char y = 32;
    int z = 3;
    x = x -y;
    z=z*x;
    z=z-y;
    printf("%d\n", z); //should be -101
}

void quest2()
{
    float x = 4;
    short y = 5;
    float z = 3;
    x = x / y;
    z = z * x;
    z = z + y;
    printf("%1f\n", z);
}

void quest3()
{
    int x = 256;
    const unsigned int y = 6000;
    long z = 100;
    x = x * y;
    z = z * x;
    z = z * y;
    printf("%ld\n", z);
    //ended up changing the printing method not sure if this was proper way
}

int main()
{
    quest3();
    return 0;
}

