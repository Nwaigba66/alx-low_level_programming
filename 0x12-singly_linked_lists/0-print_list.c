#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the beginning of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current_value = h;

	while (current_value != NULL)
	{
	if (current_value->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", current_value->len, current_value->str);

	current_value = current_value->next;
	count++;
	}

	return (count);
}
