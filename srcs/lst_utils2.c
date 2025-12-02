/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:24:04 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/02 12:25:24 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_args(char **av, t_stack **a)
{
	int	i;

	i = 0;
	while (av[i])
	{
		ft_lst_addback(a, ft_add_new(ft_atoi(av[i])));
		i++;
	}
}
