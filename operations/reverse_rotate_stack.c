/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:44:58 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/25 09:56:43 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *s, int flag)
{
	int	bot;

	bot = s->values[0];
	ft_memmove(&s->values[0], &s->values[1], (s->size - 1) * sizeof(int));
	s->values[s->size - 1] = bot;
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *s, int flag)
{
	int	bot;

	bot = s->values[0];
	ft_memmove(&s->values[0], &s->values[1], (s->size - 1) * sizeof(int));
	s->values[s->size - 1] = bot;
	if (flag == 1)
		write(1, "rrb\n", 4);
}

// void	rrs(t_stack *s, int flag)
// {
// 	int	bot;

// 	bot = s->values[0];
// 	ft_memmove(&s->values[0], &s->values[1], (s->size - 1) * sizeof(int));
// 	s->values[s->size - 1] = bot;
// 	if (flag == 1)
// 		write(1, "rra\n", 4);
// 	if (flag == 2)
// 		write(1, "rrb\n", 4);
// }

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
