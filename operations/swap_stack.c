/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:55:08 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/25 10:07:23 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *s, int flag)
{
	int	tmp1;
	int	tmp2;

	if (s->size <= 1)
		return ;
	tmp1 = pop(s);
	tmp2 = pop(s);
	push(s, tmp1);
	push(s, tmp2);
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *s, int flag)
{
	int	tmp1;
	int	tmp2;

	if (s->size <= 1)
		return ;
	tmp1 = pop(s);
	tmp2 = pop(s);
	push(s, tmp1);
	push(s, tmp2);
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss\n", 3);
}
// void	s(t_stack *s, int flag)
// {
// 	int	tmp1;
// 	int	tmp2;

// 	if (s->size <= 1)
// 		return ;
// 	tmp1 = pop(s);
// 	tmp2 = pop(s);
// 	push(s, tmp1);
// 	push(s, tmp2);
// 	if (flag == 1)
// 		write(1, "sa\n", 3);
// 	else if (flag = 2)
// 		write(1, "sb\n", 3);
// }
