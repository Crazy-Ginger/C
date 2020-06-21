#ifndef HEADER_LINKED
#define HEADER_LINKED
struct list_element
{
    struct list_element *next;
    int value;
};

struct list
{
    struct list_element *start;
    struct list_element *end;
    int length;
};

struct list* initial_list();

void add_element(struct list *ptr_list, int content);

void add_element_at(struct list *ptr_list, int content, int position);

void delete_element(struct list *ptr_list);

void delete_element_at(struct list *ptr_list, int position);

struct list_element* incrementor(struct list_element* start, int position);
#endif
