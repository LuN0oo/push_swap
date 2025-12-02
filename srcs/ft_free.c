/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:32:25 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/28 15:31:35 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_stack(t_stack **s)
{
	t_stack	*tmp;

	if (!s)
		return ;
	while (*s)
	{
		tmp = (*s)->next;
		(*s)->value = 0;
		free(*s);
		*s = tmp;
	}
}

void	ft_free_str(char **str)
{
	char	*tmp;

	if (!str)
		return ;
	while (*str)
	{
		tmp = *str;
		str++;
		free(tmp);
	}
	*str = NULL;
}
