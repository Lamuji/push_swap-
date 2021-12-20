/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:14:37 by ramzi             #+#    #+#             */
/*   Updated: 2021/12/20 13:19:35 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac < 2)
		return (0);
	stack = malloc(sizeof(t_stack));
	if (ac == 2)
		parse_char(stack, av, 0);
	if (ac > 2)
		parse_arg(ac, av, stack, 1);
	ft_algo(stack);
	ft_free(stack);
	return (0);
}
