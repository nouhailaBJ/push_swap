/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:06:13 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/05 13:08:21 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "../utils/utils.h"
typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}				t_stack;
typedef struct s_checker
{
	struct s_stack	*a;
	struct s_stack	*b;
	char			**argv;
	int				median;
	int				size_a;
	int				size_b;
}				t_checker;

int		check_arguments(t_checker *checker);
void	display_command(t_stack **a, t_stack **b, t_checker *checker, int i);
void	display_command2(t_stack **a, t_stack **b, t_checker *checker, int i);
void	check_duplicate(t_checker *checker, int num);
void	dubplicate_numbers(t_checker *checker);
void	find_instructions(t_checker *checker);
int		find_median(t_stack *a, int size);
int		find_size(t_stack *a);
int		ft_push_atoi(t_checker *checker, const char *str);
void	ft_resolve(t_stack **a, t_stack **b, t_checker *checker);
void	ft_reverse_rotate(t_stack **stack);
void	del_last(t_stack **stack);
void	ft_rotate(t_stack **stack);
void	ft_lstadd_back2(t_stack **alst, t_stack *new);
void	ft_rr(t_checker *checker);
void	ft_rrr(t_stack **a, t_stack **b);
int		ft_sorted(t_stack *a, t_stack *b);
void	ft_ss(t_checker *checker);
void	ft_swap(t_stack **stack);
int		get_max(t_stack *b);
int		get_proximity(float index);
int		index_max(t_stack *stack, int max);
void	initialise_checker(t_checker *checker, char **argv);
void	ft_push_swap(t_checker *checker, int argc);
void	push_to_a(t_stack **a, t_stack **b, int max);
int		stack_have_max(t_stack *a, int median);
void	solve_five(t_stack **list_a, t_stack **list_b);
void	solve_three(t_stack **a, t_stack **b);
void	solve_two(t_stack **stack);
void	sort_descending_b(t_stack **stack, int max);
int		stack_size(t_stack *a);
void	stock_numbers(t_checker *checker);
int		ft_error(void);
void	ft_push(t_stack **s1, t_stack **s2);
int		is_sort(t_stack *list_a);
void	push_b(int size, t_stack **list_a, t_stack **list_b);
void	free_all(t_checker *checker);
void	ft_free(t_stack **stack);
#endif
