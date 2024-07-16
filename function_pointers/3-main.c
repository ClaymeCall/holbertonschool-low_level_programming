#include "function_pointers.h"
#include "3-calc.h"

/**
 *main - The main function for the calculator of task 3
 *@argc: Count of arguments taken by main. must be = 4
 *@argv: Array of arguments for the main function.
 *
 *Return: The result of the calculation, as int
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_f = get_op_func(argv[2]);

	if (argv[2][1] != '\0' || op_f == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", op_f(num1, num2));
	return (0);
}
