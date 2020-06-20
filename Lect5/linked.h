#ifndef HEADER_LINKED
#define HEADER_LINKED
struct list_element
{
    struct list_element *next;
    int value;
};

int add_element(struct list_element *start, int content);
int add_element_at(struct list_element *start, int content, int position);
int delete_element(struct list_element *start, int position);
struct list_element* incrementor(struct list_element* start, int position);
#endif
