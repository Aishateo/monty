#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the input file.
 *
 * Description: This function is used to implement the "nop" opcode, which
 * does nothing. It takes two parameters, but they are not used.
 * This opcode is often used as a placeholder or for alignment
 * purposes.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
