#include "monty.h"

/**
 * add - Add the top two elements of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the input file.
 *
 * Description: This function adds the values of the top two elements
 * of the stack. If the stack contains less than two elements,
 * it prints an error message and exits with EXIT_FAILURE.
 * The result is stored in the second top element of the stack,
 * and the top element is removed, making the stack one element
 * shorter.
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
