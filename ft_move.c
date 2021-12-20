/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:54:37 by rfkaier           #+#    #+#             */
/*   Updated: 2021/12/17 16:18:11 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack)
{
	int	tmp;

	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	write(1, "sb\n", 3);
}

void	ra(t_stack *stack)
{
	int	tmp;
	int	i;

	tmp = stack->a[0];
	i = 0;
	while (i++ < stack->len_a - 1)
		stack->a[i - 1] = stack->a[i];
	stack->a[i - 1] = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	int	tmp;
	int	i;

	tmp = stack->b[0];
	i = 0;
	while (i++ < stack->len_b - 1)
		stack->b[i - 1] = stack->b[i];
	stack->b[i - 1] = tmp;
	write(1, "rb\n", 3);
}

void	pb(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = stack->len_b;
	tmp = stack->a[0];
	while (i < stack->len_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	while (j >= 0)
	{
		stack->b[j + 1] = stack->b[j];
		j--;
	}
	stack->b[0] = tmp;
	stack->len_b++;
	stack->len_a--;
	write(1, "pb\n", 3);
}
