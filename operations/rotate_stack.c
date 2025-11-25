/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:33:04 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/25 09:56:27 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *s, int flag)
{
	int	top;

	top = s->values[s->size - 1];
	ft_memmove(&s->values[1], &s->values[0], (s->size - 1) * sizeof(int));
	s->values[0] = top;
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *s, int flag)
{
	int	top;

	top = s->values[s->size - 1];
	ft_memmove(&s->values[1], &s->values[0], (s->size - 1) * sizeof(int));
	s->values[0] = top;
	if (flag == 1)
		write(1, "rb\n", 3);
}

// void rs(t_stack *s, int flag)
// {
// 	int	top = s->values[s->size - 1];
//
// 	ft_memmove(&s->values[1], &s->values[0], (s->size - 1) * sizeof(int));
// 	s->values[0] = top;
// 	if (flag == 1)
// 		write(1, "ra\n", 3);
// 	if (flag == 2)
// 		write(1, "rb\n", 3);
// }

void	rr(t_stack *a, t_stack *b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}
