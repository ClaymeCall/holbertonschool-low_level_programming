#include "main.h"

/**
 *print_diagonal - print a diagonal line.
 *@n: integer length of the diagonal to be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
    int rowIndex;
    int charIndex;
    
    
    for (rowIndex = 1; rowIndex <= n; rowIndex++)
    {
            for (charIndex = 0; charIndex < rowIndex; charIndex++)
            {
                    if ((charIndex) <= n)
                        _putchar(' ');
                    else
                        _putchar('\\');
                
            }
            _putchar('\n');
    }
}
