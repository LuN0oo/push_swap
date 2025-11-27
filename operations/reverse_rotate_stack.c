/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:44:58 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/27 14:48:27 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a, int flag)
{
	t_stack	*tmp;
	int		i;

	if (!(*a) || !(*a)->next)
		return (NULL);
	tmp = *a;
	i = 0;
	while ((*a)->next)
	{
		(*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, int flag)
{
	t_stack	*tmp;
	int		i;

	if (!(*b) || !(*b)->next)
		return (NULL);
	tmp = *b;
	i = 0;
	while ((*b)->next)
	{
		tmp = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return (NULL);
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
