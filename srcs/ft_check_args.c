/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:43:19 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/10 12:37:40 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_alpha(int c)
{
	if ((c >= 33 && c <= 42) || (c >= 58 && c <= 126)
		|| (c == 44) || (c == 46) || (c == 47))
		ft_error();
	return (0);
}

void	ft_alpha_check(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_is_alpha(av[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
}

int		ft_check_args(char **av)
{
	ft_alpha_check(av);
	if (!ft_check_error(av, 1, 0))
		return (1);
	return (0);
}
