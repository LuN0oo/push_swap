/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:18:38 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/25 09:55:59 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (!b)
		return ;
	push(a, pop(b));
	write(1, "pa\n", 3);
}

void	pb(t_stack *b, t_stack *a)
{
	if (!a)
		return ;
	push(b, pop(b));
	write(1, "pb\n", 3);
}

// void pp(t_stack *pushed, t_stack *taken, int flag)
// {
// 	if (!taken)
// 		return ;
// 	push(pushed, pop(taken));
// 	if (flag == 1)
// 		write(1, "pa\n", 3);
// 	else if (flag == 2)
// 		write(1, "pb\n", 3);
// }