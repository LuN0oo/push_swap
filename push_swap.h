/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:25:53 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/12 15:56:03 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

/*-----------------------Stuct-----------------------*/

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
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

/*--------------------Swap_Stack-------------------*/

void	sa(t_stack **a, int flag);
void	sb(t_stack **b, int flag);
void	ss(t_stack **a, t_stack **b);

/*--------------------Lst_Utils--------------------*/

t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
void	ft_lst_addback(t_stack **s, t_stack *new);
t_stack	*ft_add_new(int elem);
int		ft_find_index(t_stack *s, int elem);
void	ft_free_stack(t_stack **s);
void	ft_add_args(char **av, t_stack **a);
void	ft_add_args_quotted(char **av, t_stack **a);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);
int		ft_is_sorted(t_stack *a);

/*-------------------Other_Utils-------------------*/

int		ft_atoi(const char *str);
void	ft_error(void);
size_t	ft_strlen(const char *str);
char	**ft_split(const char *str, char c);
int		ft_is_alpha(int c);
int		ft_is_digit(int c);
int		ft_is_sign(int c);
int		ft_is_space(int c);
void	ft_free_str(char **str);
t_stack	*ft_parsing_quotted(char **av);
t_stack	*ft_parsing(int ac, char **av);

/*-----------------Check_For_Error-----------------*/

void	ft_alpha_check(char **av);
int		ft_check_dup(t_stack *a);
int		ft_check_error(char **av, int i, int j);
int		ft_check_args(char **av);

/*---------------------Sorting---------------------*/

void ft_sort_three(t_stack **a);

#endif