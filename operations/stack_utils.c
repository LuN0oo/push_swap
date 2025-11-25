/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:19:15 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/24 13:22:54 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int size)
{
	t_stack	*s;

	if (size <= 0)
		return (NULL);
	s = malloc(sizeof(t_stack));
	if (!s)
		return (NULL);
	s->values = malloc (sizeof(int) * size);
	if (!s->values)
	{
		free (s);
		return (NULL);
	}
	s->size = 0;
	return (s);
}

int	pop(t_stack *s)
{
	int	popped;

	popped = s->values[s->size - 1];
	s->size--;
	return (popped);
}

int	push(t_stack *s, int elem)
{
	s->values[s->size] = elem;
	s->size++;
	return (1);
}

int	is_empty(t_stack *s)
{
	if (s->size == 0)
		return (1);
	return (0);
}
