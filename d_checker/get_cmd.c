/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:51:02 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/07 16:48:03 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	get_cmd(t_checker *checker)
{
	char	*line;

	line = (char *)malloc(sizeof(char *));
	while (get_next_line(0, &line))
		apply_command(checker, line);
	free(line);
	line = NULL;
}
