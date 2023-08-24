#include "monty.h"

/**
 * swap - Swap the top two elements of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the input file.
 *
 * Description: This function swaps the values of the top two elements
 * of the stack. If the stack contains less than two elements,
 * it prints an error message and exits with EXIT_FAILURE.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n",
				line_number;
		exit(EXIT_FAILURE);
	}

	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;

}
