/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:25:53 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/27 18:07:07 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

/*-----------------------Stuct-----------------------*/

typedef struct stack
{
	long			value;
	long			index;
	struct stack	*next;
	struct stack	*prev;
}					t_stack;

/*-------------------Push_Stack--------------------*/

void	pa(t_stack **a, t_stack **b, int flag);
void	pb(t_stack **b, t_stack **a, int flag);

/*--------------Reverse_Rotate_Stack---------------*/

void	rra(t_stack **a, int flag);
void	rrb(t_stack **b, int flag);
void	rrr(t_stack **a, t_stack **b);

/*------------------Rotate_Stack-------------------*/

void	ra(t_stack **a, int flag);
void	rb(t_stack **b, int flag);
void	rr(t_stack **a, t_stack **b);

/*------------------Stack_Utils--------------------*/

t_stack	*create_stack(int size);
int		is_empty(t_stack *s);

/*--------------------Swap_Stack-------------------*/

int		sa(t_stack **a, int flag);
void	sb(t_stack **b, int flag);
int		ss(t_stack **a, t_stack **b);

/*--------------------Lst_Utils--------------------*/

t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
void	ft_lst_addback(t_stack **s, t_stack *new);
t_stack	*ft_add_new(int elem);
int		ft_find_index(t_stack *s, int elem);
void	ft_free_stack(t_stack **s);

/*-------------------Other_Utils-------------------*/

int		ft_atoi(const char *str);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_error(void);
int		ft_strlen(const char *str);
char	**ft_split(const char *str, char c);

#endif