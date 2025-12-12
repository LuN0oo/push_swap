/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:25:21 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/12 15:52:08 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_stack *a;
	int		i;
	int		j;
	
	i = 1;
	j = 0;
	ft_check_args(av);
	a = ft_parsing(ac, av);
	ft_check_dup(a);
	ft_sort_three(&a);
	while (i < ac)
	{
		printf("%d\n", a->value);
		a = a->next;
		i++;
	}
	return (0);
}