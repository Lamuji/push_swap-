/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:01:50 by rfkaier           #+#    #+#             */
/*   Updated: 2021/12/17 17:30:56 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int x, t_stack *stack)
{
	if (x == 1)
	{
		write(1, "Error\n", 6);
		ft_free(stack);
		exit(EXIT_FAILURE);
	}
	if (x == 2)
	{
		ft_free(stack);
		exit(EXIT_FAILURE);
	}
	exit(EXIT_FAILURE);
}

void	ft_free(t_stack *stack)
{
	if (stack->a != NULL)
		free(stack->a);
	if (stack->b != NULL)
		free(stack->b);
	free (stack);
}
