#include "linked.h"
#include <stdlib.h>

struct list* initial_list()
{
    //initialises an empty list with length = 0
    struct list* new_list = (struct list*) calloc(1, sizeof(struct list));
    new_list->length = 0;
    return new_list;
}

//needs finishing
struct list_element* incrementor(struct list_element* ptr_start, int position)
{
    for (int i = 0; i < position; i++)
    {
        
    }
}

void add_element(struct list *ptr_list, int content)
{
    //assigns new memory and then updates end of list and updates the end to point to the new element

    struct list_element *ptr_new = (struct list_element*) calloc(1, sizeof(struct list_element));
    ptr_new->value = content;

    if (ptr_list->length == 0)
    {
        ptr_list->start = ptr_new;
        ptr_list->end = ptr_new;
    }
    else
    {
        struct list_element *ptr_end = ptr_list->end;
        ptr_end->next = ptr_new;
        ptr_list->end = ptr_new;
    }
    ptr_list->length++;
}

//needs finishing
void add_element_at(struct list *ptr_list, int content, int position)
{

}

//needs finishing
void delete_element(struct list *ptr_list)
{

}

//needs finishing
void delete_element_at(struct list *ptr_list, int position)
{
    struct list_element *ptr_start = ptr_list->start;
    struct list_element *ptr_delete = incrementor(ptr_start, position-1);
    if (ptr_delete->next != NULL)
    {

    }
}
