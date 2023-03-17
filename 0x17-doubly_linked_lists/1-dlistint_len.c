#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current;
    size_t count;

    current = h;
    count = 0;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
        count++;
    }
    return (count);
}
