#include "monty.h"
/**
 * pint - Print the value at the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the input file.
 *
 * Description: This function prints the value at the
 * top of the stack followed
 * by a new line. If the stack is empty,
 * it prints an error message,
 * and exits with EXIT_FAILURE.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
