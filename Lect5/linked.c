#include "linked.h"
#include <stdlib.h>

int add_element(struct list_element *ptr_current, int content)
{
    struct list_element *ptr_new = (struct list_element*) calloc(1, sizeof(struct list_element));
    ptr_current->next = ptr_new;
    ptr_new->value = content;
    return 1;
}

int delete_element(struct list_element *start, int position)
{
    struct list_element* ptr_delete = incrementor(start, position);

    return 1;
}
