#include "main.h"

/**
 * get_op_func - the integer to check
 *
 *
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add},{"-", op_sub},{"*", op_mul}
		,{"/", op_div},{"%", op_mod},{NULL, NULL};
	int i;

	return (elem == 98 || -elem == 98);
}
