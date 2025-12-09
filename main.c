/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:04:14 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/08 11:35:48 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>



int	main(int ac, char **av)
{
	t_stack *a;
	long	i;

	a = ft_parsing(ac, av);
	i = 1;
	while (i < ac)
	{
		printf("%d\n", a->value);
		a = a->next;
		i++;
	}
	return (0);
}