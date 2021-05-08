# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 17:08:24 by nbjaghou          #+#    #+#              #
#    Updated: 2021/05/07 17:33:20 by nbjaghou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker
PUSH_SWAP = push_swap

CSRCS = d_checker/stock_numbers.c		\
		d_checker/get_cmd.c				\
		d_checker/ft_swap.c				\
		d_checker/ft_strcmp.c			\
		d_checker/ft_ss.c				\
		d_checker/ft_rrr.c				\
		d_checker/ft_rr.c				\
		d_checker/ft_rotate.c			\
		d_checker/ft_reverse_rotate.c	\
		d_checker/ft_push.c				\
		d_checker/ft_push_atoi.c		\
		d_checker/ft_free.c				\
		d_checker/dubplicate_numbers.c	\
		d_checker/checker.c				\
		d_checker/checker_execute.c		\
		d_checker/check_arguments.c		\
		d_checker/apply_command.c		\
		utils/get_next_line.c			\
		utils/ft_strjoin.c				\
		utils/ft_strdup.c				\
		utils/ft_isdigit.c				\
		utils/ft_strchr.c				\
		utils/ft_strlen.c				\
		utils/ft_split.c				\
		utils/ft_substr.c				\

COBJS = d_checker/stock_numbers.o		\
		d_checker/get_cmd.o				\
		d_checker/ft_swap.o				\
		d_checker/ft_strcmp.o			\
		d_checker/ft_ss.o				\
		d_checker/ft_rrr.o				\
		d_checker/ft_rr.o				\
		d_checker/ft_rotate.o			\
		d_checker/ft_reverse_rotate.o	\
		d_checker/ft_push.o				\
		d_checker/ft_push_atoi.o		\
		d_checker/ft_free.o				\
		d_checker/dubplicate_numbers.o	\
		d_checker/checker.o				\
		d_checker/checker_execute.o		\
		d_checker/check_arguments.o		\
		d_checker/apply_command.o		\
		utils/get_next_line.o			\
		utils/ft_strjoin.o				\
		utils/ft_strdup.o				\
		utils/ft_isdigit.o				\
		utils/ft_strchr.o				\
		utils/ft_strlen.o				\
		utils/ft_split.o				\
		utils/ft_substr.o				\

PSRCS = d_push_swap/check_arguments.c		\
		d_push_swap/display_command.c		\
		d_push_swap/dubplicate_numbers.c	\
		d_push_swap/find_instructions.c		\
		d_push_swap/find_median.c			\
		d_push_swap/find_size.c				\
		d_push_swap/ft_push_atoi.c			\
		d_push_swap/ft_push.c			    \
		d_push_swap/ft_resolve.c			\
		d_push_swap/ft_reverse_rotate.c		\
		d_push_swap/ft_rotate.c				\
		d_push_swap/ft_rr.c					\
		d_push_swap/ft_rrr.c				\
		d_push_swap/ft_sorted.c				\
		d_push_swap/ft_ss.c					\
		d_push_swap/ft_swap.c				\
		d_push_swap/get_max.c				\
		d_push_swap/get_proximity.c			\
		d_push_swap/index_max.c				\
		d_push_swap/push_swap.c				\
		d_push_swap/push_to_a.c				\
		d_push_swap/solve_five.c			\
		d_push_swap/solve_three.c			\
		d_push_swap/solve_two.c				\
		d_push_swap/sort_descending_b.c		\
		d_push_swap/stack_size.c			\
		d_push_swap/stock_numbers.c			\
		d_push_swap/is_sort.c				\
		d_push_swap/push_b.c				\
		d_push_swap/ft_free.c				\
		utils/get_next_line.c				\
		utils/ft_strjoin.c					\
		utils/ft_strdup.c					\
		utils/ft_isdigit.c					\
		utils/ft_strchr.c					\
		utils/ft_strlen.c					\
		utils/ft_split.c					\
		utils/ft_substr.c					\
			
POBJS = d_push_swap/check_arguments.o		\
		d_push_swap/display_command.o		\
		d_push_swap/dubplicate_numbers.o	\
		d_push_swap/find_instructions.o		\
		d_push_swap/find_median.o			\
		d_push_swap/find_size.o				\
		d_push_swap/ft_push_atoi.o			\
		d_push_swap/ft_push.o			    \
		d_push_swap/ft_resolve.o			\
		d_push_swap/ft_reverse_rotate.o		\
		d_push_swap/ft_rotate.o				\
		d_push_swap/ft_rr.o					\
		d_push_swap/ft_rrr.o				\
		d_push_swap/ft_sorted.o				\
		d_push_swap/ft_ss.o					\
		d_push_swap/ft_swap.o				\
		d_push_swap/get_max.o				\
		d_push_swap/get_proximity.o			\
		d_push_swap/index_max.o				\
		d_push_swap/push_swap.o				\
		d_push_swap/push_to_a.o				\
		d_push_swap/solve_five.o			\
		d_push_swap/solve_three.o			\
		d_push_swap/solve_two.o				\
		d_push_swap/sort_descending_b.o		\
		d_push_swap/stack_size.o			\
		d_push_swap/stock_numbers.o			\
		d_push_swap/is_sort.o				\
		d_push_swap/push_b.o				\
		d_push_swap/ft_free.o				\
		utils/get_next_line.o				\
		utils/ft_strjoin.o					\
		utils/ft_strdup.o					\
		utils/ft_isdigit.o					\
		utils/ft_strchr.o					\
		utils/ft_strlen.o					\
		utils/ft_split.o					\
		utils/ft_substr.o					\

FLAGS = -Wall -Wextra -Werror 

all : $(CHECKER) $(PUSH_SWAP)

$(CHECKER) : ${COBJS}
	@gcc -o $(CHECKER) ${COBJS}  ${FLAGS}

$(PUSH_SWAP) : ${POBJS}
	@gcc -o $(PUSH_SWAP) ${POBJS}  ${FLAGS}

.c.o : ${CSRCS} ${PSRCS}
		gcc  -c  $< -o ${<:.c=.o}

clean :
		/bin/rm -f $(COBJS)
		/bin/rm -f $(POBJS)

fclean : clean
		/bin/rm -f $(CHECKER)
		/bin/rm -f $(PUSH_SWAP)

re : fclean
		make all