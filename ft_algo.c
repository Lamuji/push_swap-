/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:46:49 by rfkaier           #+#    #+#             */
/*   Updated: 2021/12/17 15:21:38 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_sup(t_stack *stack, int nbr)
{
	int	i;
	int	sup;

	i = 0;
	sup = MAX;
	while (i < stack->len_a)
	{
		if (stack->a[i] > nbr && stack->a[i] < sup)
			sup = stack->a[i];
		i++;
	}
	return (sup);
}

void	push_all_in_b(t_stack *stack)
{
	while (stack->len_a > 2)
	{
		if (stack->a[0] == stack->max)
			ra(stack);
		pb(stack);
	}
}

int	best_option(t_stack *stack)
{
	int	i;
	int	best_option;
	int	mov_a;
	int	mov_b;
	int	nbr;

	i = 0;
	mov_a = 0;
	mov_b = 0;
	best_option = MAX;
	while (i < stack->len_b)
	{
		mov_b = cost_mov_b(stack, stack->b[i]);
		mov_a = cost_mov_a(stack, search_sup(stack, stack->b[i]));
		if (mov_b + mov_a < best_option)
		{
			best_option = mov_b + mov_a;
			nbr = stack->b[i];
		}
		i++;
	}
	return (nbr);
}

void	continue_algo(t_stack *stack, int nbr, int supp)
{
	nbr = best_option(stack);
	if (index_b(stack, nbr) < stack->len_b / 2)
	{
		while (stack->b[0] != nbr)
			rb(stack);
	}
	else if (index_b(stack, nbr) >= stack->len_b / 2)
	{
		while (stack->b[0] != nbr)
			rrb(stack);
	}
	supp = search_sup(stack, nbr);
	if (index_a(stack, supp) < stack->len_a / 2)
	{
		while (stack->a[0] != supp)
			ra(stack);
	}
	else if (index_a(stack, supp) >= stack->len_a / 2)
	{
		while (stack->a[0] != supp)
			rra(stack);
	}
}

int	ft_algo(t_stack *stack)
{
	int	nbr;
	int	supp;

	nbr = 0;
	supp = 0;
	stack->max = max_a(stack);
	if (stack->len_arg == 2)
	{
		sa(stack);
		exit(EXIT_SUCCESS);
	}
	if (stack->len_arg == 3)
	{
		three_val(stack);
		exit(EXIT_SUCCESS);
	}
	push_all_in_b(stack);
	while (stack->len_a < stack->len_arg)
	{
		continue_algo(stack, nbr, supp);
		pa(stack);
	}
	while (stack->max != stack->a[stack->len_arg - 1])
		ra(stack);
	return (1);
}
