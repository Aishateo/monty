#include "monty.h"

/**
 * pop - Remove the top element from the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the input file.
 *
 * Description: This function removes the top element from the stack.
 * If the stack is empty, it prints an error message and exits
 * with EXIT_FAILURE. It updates the stack pointers and frees
 * the memory of the removed element.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	*stack = (*stack)->next;

	if (*stack)
		(*stack)->prev = NULL;

	free(temp);
}
