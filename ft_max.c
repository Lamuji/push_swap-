/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:30:43 by rfkaier           #+#    #+#             */
/*   Updated: 2021/12/14 18:03:15 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_a(t_stack *stack)
{
	int	i;
	int	clone;

	i = 0;
	clone = stack->a[i];
	while (i < stack->len_a)
	{
		if (stack->a[i] > clone)
			clone = stack->a[i];
		i++;
	}
	return (clone);
}

int	max_b(t_stack *stack)
{
	int	i;
	int	clone;

	i = 0;
	clone = stack->b[i];
	while (i < stack->len_b)
	{
		if (stack->b[i] > clone)
			clone = stack->b[i];
		i++;
	}
	return (clone);
}
