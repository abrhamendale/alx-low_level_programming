#include "main.h"

/**
 * str_concat - Entry point
 *
 * Description: Creates a string
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: string array
 */
char *str_concat(char *s1, char *s2)
{
        char *s;
        unsigned int i, a, b;

        i = 0;
        a = 0;
        b = 0;
        if (s1 == NULL && s2 == NULL)
        {
                s1 = "";
                s2 = "";
                s = malloc(sizeof(char));
        }
        else if (s1 == NULL && s2 != NULL)
        {
            b = strlen(s2);
            s = malloc(b * sizeof(char));
        }
        else if (s2 == NULL && s1 != NULL)
        {
            a = strlen(s1);
            s = malloc(a * sizeof(char));
        }
        else
        {
            a = strlen(s1);
            b = strlen(s2);
            s = malloc((a + b) * sizeof(char));
        }
        if (s == NULL)
        {
                return (NULL);
        }
        while (i < a)
        {
                s[i] = s1[i];
                i++;
        }
        while (i < a + b)
        {
                s[i] = s2[i - a];
                i++;
        }
        s[i] = '\0';
        return (s);
        }
