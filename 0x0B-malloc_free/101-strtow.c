#include "main.h"
/**
 * strtow - Prints an array of string
 * @str: The array to convert to words
 *
 * Return: Pointer array
 */

char **strtow(char *str)
{
    unsigned int i, j, l, k;
    unsigned int count_w, count_l, length;
    char **c;

    count_l = count_w = length = 0;
    for (i = 0 ; i < strlen(str) ; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && i != length)
        {
            count_w++;
        }
        if (i == length && str[i] != ' ' && str[length - 1] == ' ')
        {
            count_w++;
        }
        if (i == 0 && str[i] != 0)
        {
            count_w++;
        }
    }
    printf("%d\n", count_w);
    c = malloc(8 * count_w);
    printf("1");
    if (c == NULL)
    {
	    free(c);
	    printf("Failed");
	    return (c);
    }
    for (j = 0 ; j < strlen(str) ; j++)
    {
        if (str[j] != ' ')
        {
            count_l++;
        }
        if (str[j] == ' ' && str[j - 1] != 0 && j != 0)
        {
		printf("l1");
            c[l] = malloc(sizeof(char) * count_l);
     		if (c[l] == NULL)
		{
			printf("malloc failed");
		}
     	    for (k = j - count_l - 1 ; k < j ; k++)
	    {
		    c[l][k] = str[k];
		    printf("%c", c[l][k]);
	    }
	    printf("\n");
	    count_l = 0;
            l++;
	}
    }
    return (c);
}
