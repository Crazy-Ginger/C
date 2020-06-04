#include <stdio.h>

int addmult(int x, int y, int z)
{
    return (x + y) *z;
}

int main()
{
    int x = 0, y;

    y = addmult(3, 4, 5);
    printf("Addmult(3, 4, 5) = %d\n", y);

    printf("These are numbers less than 10");
    for (x; x < 5; x++)
    {
        printf("%d\n", x);
    }
    x = 1;
    printf("These are square numbers less than 100\n");
    while (x< 10)
    {
        printf("%d\n", x*x);
        x++;
    }
    
    printf("This loop runs until it gets to 49, then it prints and stops\n");
    x = 30;
    do 
    {
        if (x==49)
        {
            printf("%d", x);
            break;
        }
        x++;
    }while (1);

    x = 1;
    y = 2;
    printf("This should print \"Yes\" if x==y, otherwise \"No\"");

    switch (x==y)
    {
        case 1:
            printf("Yes\n");
            break;
        default:
            printf("No\n");
            break;
    };
}

