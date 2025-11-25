/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:25:53 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/25 16:06:13 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

/*--------------------Stucts--------------------*/

typedef struct stack
{
	int	*values;
	int	size;
	int	*top;
	int	*bot;
}		t_stack;

/*--------------------Push_Stack--------------------*/

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *b, t_stack *a);

/*---------------Reverse_Rotate_Stack---------------*/

void	rra(t_stack *s, int flag);
void	rrb(t_stack *s, int flag);
void	rrr(t_stack *a, t_stack *b);

/*-------------------Rotate_Stack-------------------*/

void	ra(t_stack *s, int flag);
void	rb(t_stack *s, int flag);
void	rr(t_stack *a, t_stack *b);

/*-------------------Stack_Utils--------------------*/

t_stack	*create_stack(int size);
int		pop(t_stack *s);
int		push(t_stack *s, int elem);
int		is_empty(t_stack *s);

/*--------------------Swap_Stack--------------------*/

int		sa(t_stack *s, int flag);
void	sb(t_stack *s, int flag);
int		ss(t_stack *a, t_stack *b);

/*-------------------Other_Utils-------------------*/

int		ft_atoi(const char *str);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_error(void);

#endif