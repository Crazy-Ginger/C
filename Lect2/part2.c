#include <stdio.h>

struct coords 
{
    float x,y;
};

struct date 
{
    unsigned short year;
    unsigned short MonthDate;
};

struct  person
{
    char name[50];
    struct date birthday;
};

struct __attribute__((__packed__)) packed
{
    char bit1:1;
    char bit2:1;
    char bit3:1;
    char bit4:1;
    char bit5:1;
    char bit6:1;
    char twoBit:2;
};

int main()
{
    struct packed derreck;
    printf("%lu\n", sizeof(derreck));
    return 0;
}
