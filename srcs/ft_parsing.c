/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:31:44 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/09 14:43:47 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_parsing_quotted(char **av)
{
	t_stack	*a;
	char	**tmp;

	a = NULL;
	tmp = ft_split(av[1], 32);
	ft_add_args_quotted(tmp, &a);
	ft_free_str(tmp);
	free(tmp);
	return (a);
}

t_stack	*ft_parsing(int ac, char **av)
{
	t_stack	*a;
	
	a = NULL;
	if (ac < 2)
		ft_error();
	else if (ac == 2)
		a = ft_parsing_quotted(av);
	else
		ft_add_args(av, &a);
	return (a);
}
