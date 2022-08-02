#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
<<<<<<< HEAD
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
=======
        unsigned int i;

        i = 0;
        while (i < size)
        {
            if (i % 10)
            {
                printf(" ");
            }
            if (!(i % 10) && i)
            {
                printf("\n");
            }
            printf("0x%02x", buffer[i]);
            i++;
        }
        printf("\n");
>>>>>>> ee1a1538ee1a522f289677df50031bb189082496
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
	i = 0;
	while (i < 98)
	{
		p[i++] = 98;
	}
	simple_print_buffer(p, 98);
	free(p);
	return (0);
}
=======
        char *p;
        int i;

        p = malloc(sizeof(char) * 10);
        p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
        i = 0;
        while (i < 98)
        {
            p[i++] = 98;
        }
        simple_print_buffer(p, 98);
        free(p);
        return (0);
}
>>>>>>> ee1a1538ee1a522f289677df50031bb189082496
