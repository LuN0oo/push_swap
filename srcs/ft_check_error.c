/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:12:52 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/10 12:41:58 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_sign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	ft_is_space(int c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_check_error(char **av, int i, int j)
{
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_is_sign(av[i][j]))
			{
				j++;
				if (!ft_is_digit(av[i][j]))
					ft_error();
			}
			else if (ft_is_digit(av[i][j]))
			{
				j++;
				if (av[i][j] == '\0')
					break ;
				if (!ft_is_digit(av[i][j]) && !ft_is_space(av[i][j]))
					ft_error();
			}
			j++;
		}
		i++;
	}
	return (0);
}
