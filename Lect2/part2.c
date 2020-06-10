#include <stdio.h>

struct coords 
{
    float x,y;
};

struct date 
{
    unsigned short year;
    unsigned char month;
    unsigned char date;
};

struct  person
{
    char name[50];
    struct date birthday;
};
/*__attribute__((__packed__))*/
struct  packed
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
    struct coords coord;
    struct person derreck;
    struct packed small;
    printf("%lu\n", sizeof(coord));
    printf("%lu\n", sizeof(derreck));
    printf("%lu\n", sizeof(small));
    return 0;
}
