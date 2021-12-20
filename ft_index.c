/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:50:17 by rfkaier           #+#    #+#             */
/*   Updated: 2021/12/17 16:16:06 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_b(t_stack *stack, int nbr)
{
	int	i;

	i = 0;
	while (nbr != stack->b[i])
		i++;
	return (i);
}

int	index_a(t_stack *stack, int nbr)
{
	int	i;

	i = 0;
	while (nbr != stack->a[i])
		i++;
	return (i);
}
