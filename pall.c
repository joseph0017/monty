#include "monty.h"
/**
 * m_pall - print the stack
 * @head: double pointer
 * @line_count: current line of monty
 * Return: returns 0
 */
void m_pall(stack_t **head, __attribute__((unused)) unsigned int line_count)
{
	stack_t *i = *head;

	if (*head && head)
	{
		while (i)
		{
			printf("%d\n", i->n);
			i = i->next;
		}
	}
}
