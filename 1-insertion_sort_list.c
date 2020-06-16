#include "sort.h"
void swap_list(listint_t *node, listint_t **list)
{
	listint_t *tmp = NULL;


	tmp = node->next;
	if (node->prev)
	{

		(node->prev)->next = tmp;
	}
	else
	{
		*list = tmp;
	}
	tmp->prev = node->prev;
	if (tmp->next)
	{
		(tmp->next)->prev = node;
	}
	node->next = tmp->next;
	tmp->next = node;
	node->prev = tmp;
}

void insertion_sort_list(listint_t **list)
{
	listint_t *act = NULL;
	int key = 0;
	act = (*list)->next;
	while (act != NULL)
	{
		printf("aqui");
		key = act->n;
		while (act->prev != NULL && (act->prev)->n > key);
		{
			printf("toi\n");

			swap_list(act->prev, &(list));
			printf("llego");
		}
		act = act->next;

	}

}
/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	return (0);
}
