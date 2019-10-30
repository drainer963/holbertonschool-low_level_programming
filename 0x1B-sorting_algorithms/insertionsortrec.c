#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	int len = countnodes(*list);

	insertion_sort_list_rec(list, len);
}
void insertion_sort_list_rec(listint_t **list, int len)
{
	int j;
	listint_t *temp = NULL;

	len = countnodes(*list);

	if (len <= 1)
		return;

	insertion_sort_list_rec(list, len - 1);

	j = len - 1;

	while (j > 0 && list[j] < list[j - 1])
	{
		temp = list[j];
		list[j] = list[j - 1];
		list[j - 1] = temp;
		j -= 1;
	}
}


int countnodes(listint_t *head)
{
	int i = 0;
	listint_t *cur = head;

	while (cur != NULL)
	{
		i++;
		cur = cur->next;
	}
	return (i);
}
