/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:42:37 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/02 16:20:07 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lst_addback(t_stack **s, t_stack *new)
{
	t_stack	*tmp;

	if (!*s || !new)
		return ;
	if (*s == NULL)
	{
		*s = new;
		return ;
	}
	tmp = ft_lstlast(*s);
	tmp->next = new;
}

t_stack	*ft_add_new(int elem)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = elem;
	new->next = NULL;
	return (new);
}

int	ft_find_index(t_stack *s, int elem)
{
	int	i;

	i = 0;
	while (s->value != elem)
	{
		i++;
		s = s->next;
	}
	s->index = 0;
	return (i);
}
