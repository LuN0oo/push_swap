/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:24:04 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/12 16:26:22 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_args(char **av, t_stack **a)
{
	long	i;

	i = 1;
	while (av[i])
	{
		ft_lst_addback(a, ft_add_new(ft_atoi(av[i])));
		i++;
	}
}

void	ft_add_args_quotted(char **av, t_stack **a)
{
	long	i;

	i = 0;
	while (av[i])
	{
		ft_lst_addback(a, ft_add_new(ft_atoi(av[i])));
		i++;
	}
}

int	ft_min(t_stack *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (a->value < i)
			i = a->value;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_stack *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (a->value > i)
			i = a->value;
		a = a->next;
	}
	return (i);
}
int	ft_is_sorted(t_stack *a)
{
	int	i;

	i = a->value;
	while (a)
	{
		if (i > a->value)
			return (0);
		i = a->value;
		a = a->next;
	}
	return (1);
}
