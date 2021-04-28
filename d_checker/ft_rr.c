/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:53:40 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/26 17:00:43 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rr(t_checker *checker)
{
	ft_rotate(&checker->a);
	ft_rotate(&checker->b);
}