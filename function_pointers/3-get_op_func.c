#include "3-calc.h"
#include "function_pointers.h"

/**
 *get_op_func - Selects the correct function to perform
 *the mathematical operation asked by the user.
 *@s: String of characters input by the user (expected +, -, *, /, %).
 *
 *Return: Pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
