/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:46:43 by rfkaier           #+#    #+#             */
/*   Updated: 2021/12/14 18:02:53 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_a(t_stack *stack)
{
	int	i;
	int	clone;

	i = 0;
	clone = stack->a[i];
	while (i < stack->len_a)
	{
		if (stack->a[i] < clone)
			clone = stack->a[i];
		i++;
	}
	return (clone);
}

void	three_val(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->a[0] < stack->a[2] && stack->a[2] < stack->a[1])
	{
		sa(stack);
		ra(stack);
	}
	else if (stack->a[2] < stack->a[0] && stack->a[0] < stack->a[1])
		rra(stack);
	else if (stack->a[1] < stack->a[0] && stack->a[0] < stack->a[2])
		sa(stack);
	else if (stack->a[2] < stack->a[1] && stack->a[1] < stack->a[0])
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->a[1] < stack->a[2] && stack->a[2] < stack->a[0])
		ra(stack);
}
