#ifndef SORT_H
#define SORT_H
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap(int *xp, int *yp);
void selection_sort(int *array, size_t size);
int part(int array[], int first, int last, size_t size);
void quick_sort_2(int *array, int first, int last, size_t size);
void quick_sort(int *array, size_t size);
void insertion_sort_list_rec(listint_t **list, int len);
int countnodes(listint_t *head);
void sortedInsert(listint_t** head_ref, listint_t* new_node);
void insertion_sort_list(listint_t **list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);

#endif
