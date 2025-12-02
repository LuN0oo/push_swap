/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:18:38 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/28 15:32:13 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b, int flag)
{
	t_stack	*tmp;

	if (!*b)
		return (NULL);
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	if (flag == 1)
		write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b, int flag)
{
	t_stack	*tmp;

	if (!*a)
		return (NULL);
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	if (flag == 1)
		write(1, "pb\n", 3);
}
