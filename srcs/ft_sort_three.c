/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 15:34:34 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/12 16:24:43 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sort_three(t_stack **a)
{
	if (ft_min(*a) == (*a)->value)
	{
		rra(a, 1);
		sa(a, 1);
	}
	else if (ft_max(*a) == (*a)->value)
	{
		ra(a, 1);
		if (!ft_is_sorted(*a))
			sa(a, 1);
	}
	else 
	{
		if (ft_find_index(*a, ft_max(*a)) == 1)
			rra(a, 1);
		else 
			sa(a, 1);
	}
}