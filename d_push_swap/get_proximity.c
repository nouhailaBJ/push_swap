/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_proximity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:52:14 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/04 15:53:12 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_proximity(float index)
{
	int	m;

	m = (int) index;
	if ((m - index) >= 0.5)
		return (m + 1);
	else
		return (m);
}
