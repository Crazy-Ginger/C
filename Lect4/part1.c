#include <stdio.h>

int main()
{
    printf("%d\n", 3*4 << 2); // 48?
    printf("%d\n", ~(4 - 5)); //0?
    printf("%d\n", 4 && 3);   //1?
    printf("%d\n", 4 & 3);    //0?
    printf("%d\n", 9 || 12 >> 32);    //???
    return 0;
}
