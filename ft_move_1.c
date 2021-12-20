/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:18:50 by rfkaier           #+#    #+#             */
/*   Updated: 2021/12/17 16:18:15 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_mov_a(t_stack *stack, int nbr)
{
	int	i;

	i = 0;
	while (i < stack->len_a)
	{
		if (stack->a[i] == nbr)
		{
			if (i >= stack->len_a / 2)
				return (stack->len_a - i);
			return (i);
		}
		i++;
	}
	return (0);
}

int	cost_mov_b(t_stack *stack, int nbr)
{
	int	i;

	i = 0;
	while (i < stack->len_b)
	{
		if (stack->b[i] == nbr)
		{
			if (i >= stack->len_b / 2)
				return (stack->len_b - i);
			return (i);
		}
		i++;
	}
	return (0);
}

void	rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = stack->len_b - 1;
	tmp = stack->b[i];
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = tmp;
	write(1, "rrb\n", 4);
}

void	rra(t_stack *stack)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = stack->len_a - 1;
	tmp = stack->a[i];
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = tmp;
	write(1, "rra\n", 4);
}

void	pa(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = stack->len_a;
	tmp = stack->b[0];
	while (i < stack->len_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	while (j >= 0)
	{
		stack->a[j + 1] = stack->a[j];
		j--;
	}
	stack->a[0] = tmp;
	stack->len_a++;
	stack->len_b--;
	write(1, "pa\n", 3);
}
