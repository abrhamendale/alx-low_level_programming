#include "main.h"

/**
 * print_list - Prints all the elements of a signly linked list
 *
 * @h: Input list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
    struct list_t *tmp;

    tmp = h;
    if(tmp->next == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);      
	    tmp = tmp->next;                
	}
}
