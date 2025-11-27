/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:19:15 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/27 15:40:33 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int size)
{
	t_stack	*s;

	if (size <= 0)
		return (NULL);
	s = malloc(sizeof(t_stack) * size);
	if (!s)
		return (NULL);
	s->value = malloc(sizeof(int));
	if (!s->value)
	{
		free (s);
		return (NULL);
	}
	s->size = 0;
	return (s);
}

int	is_empty(t_stack *s)
{
	if (s->size == 0)
		return (1);
	return (0);
}
