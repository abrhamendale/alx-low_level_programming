#include "main.h"
/**
 * strtow - Prints an array of string
 * @str: The array to convert to words
 *
 * Return: Pointer array
 */

char **strtow(char *str)
{
    int i, j, l, k;
    unsigned int count_w, count_l, length;
    char **c;

    count_l = count_w = length = 0;
    for (i = 0 ; i < strlen(str) ; i++)
    {
        if (str[i] == " " && str[i + 1] != " " && i != length)
        {
            count_w++;
        }
        if (i == length && str[i] != " " && str[length - 1] == " ")
        {
            count_w++;
        }
        if (i == 0 && str[i] != 0)
        {
            count_w++;
        }
    }
    c = malloc(sizeof(char *) * count_w);
    for (j = 0 ; j < strlen(str) ; j++)
    {
        if (str[j] != " ")
        {
            count_l++;
        }
        if (str[j] == " " && str[j - 1] != 0 && j != 0)
        {
            c[l] = malloc(sizeof(char) * count_l);
            for (k = j - count_l - 1 ; k < j ; k++)
                c[l][k] = str[k];
            count_l = 0;
            l++;
        ]
    }
}
