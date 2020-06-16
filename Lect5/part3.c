#include <stdio.h>
#include <stdlib.h>

struct list_element
{
    struct list_element *next;
    int content;
};

void add_element(struct list_element current, int content)
{
    int* new = (struct list_element*) calloc(1, sizeof(struct list_element));
    current.next = &new;

}

void add_el_here(struct list_element start, int content,int  position)
{

}

int main()
{
    return 0;
}
