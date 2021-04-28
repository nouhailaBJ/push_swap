/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:05:52 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/28 16:32:21 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
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
}				t_checker;

void	apply_command(t_checker *checker, char *line);
int		check_arguments(t_checker *checker);
void	checker_execute(t_checker *checker);
int		ft_error(void);
void	initialise_checker(t_checker *checker, char **argv);
void	ft_checker(t_checker *checker);
void	dubplicate_numbers(t_checker *checker);
void	dubplicate_numbers(t_checker *checker);
void	ft_free(t_stack *stack);
void	free_all(t_checker *checker);
int		ft_push_atoi(t_checker *checker, const char *str);
void	add_first(t_stack **stack, int num);
void	ft_push(t_stack **s1, t_stack **s2);
void	del_last(t_stack **stack);
void	ft_reverse_rotate(t_stack **stack);
void	ft_lstadd_back2(t_stack **alst, t_stack *new);
void	ft_rotate(t_stack **stack);
void	ft_rr(t_checker *checker);
void	ft_rrr(t_stack **a, t_stack **b);
void	ft_ss(t_checker *checker);
int		ft_strcmp(char *str1, char *str2);
void	ft_swap(t_stack **stack);
void	get_cmd(t_checker *checker);
void	stock_numbers(t_checker *checker);
void	check_duplicate(t_checker *checker, int num);
#endif
