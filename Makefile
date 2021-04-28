# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 17:08:24 by nbjaghou          #+#    #+#              #
#    Updated: 2021/04/26 17:40:38 by nbjaghou         ###   ########.fr        #
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

FLAGS = -Wall -Wextra -Werror 

all : $(CHECKER)

$(CHECKER) : ${COBJS}
	gcc -o $(CHECKER) ${COBJS}  ${FLAGS}

.c.o : ${CSRCS}
		gcc  -c  $< -o ${<:.c=.o}

clean :
		/bin/rm -f $(COBJS)

fclean : clean
		/bin/rm -f $(CHECKER)

re : fclean
		make all