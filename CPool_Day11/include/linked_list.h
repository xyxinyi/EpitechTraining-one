#ifndef LINKED_LISTS_H_
#define LINKED_LISTS_H_

typedef struct linked_list
{
	void *data;

	struct linked_list *next;
} linked_list_t;

#endif

