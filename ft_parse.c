/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:38:03 by ramzi             #+#    #+#             */
/*   Updated: 2021/12/20 20:51:57 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i + 1 < stack->len_a)
	{
		if (stack->a[i] > stack->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_free_str(t_stack *stack, char **str)
{
	int	i;

	i = 0;
	while (i < stack->len_arg)
	{
		if (str[i] != NULL)
			free (str[i]);
		i++;
	}
	free(str);
}

void	parse_char(t_stack *stack, char **av, int i)
{
	char	**str;

	stack->len_b = 0;
	stack->len_a = ft_count_nbr(av[1]);
	stack->len_arg = stack->len_a;
	stack->a = malloc(sizeof(int) * stack->len_a);
	stack->b = malloc(sizeof(int) * stack->len_a);
	str = ft_split(av[1], ' ');
	while (i < stack->len_a)
	{
		if (ft_str_is_nbr(str[i]) == 0 || ft_check_ipt(str[i]) == 0
			|| ft_is_int(stack, str[i]) == 0)
		{
			ft_free_str(stack, str);
			error(1, stack);
		}
		stack->a[i] = ft_atoi(str[i]);
		i++;
	}
	if (ft_double(stack, stack->len_a) == 0)
		error(1, stack);
	if (is_sorted(stack) == 1)
		error(2, stack);
}

void	parse_arg(int ac, char **av, t_stack *stack, int i)
{	
	int	j;

	stack->len_b = 0;
	stack->len_a = ac - 1;
	stack->len_arg = stack->len_a;
	stack->a = malloc(sizeof(int) * stack->len_a);
	stack->b = malloc(sizeof(int) * stack->len_a);
	j = 1;
	while (av[i])
	{
		if (ft_str_is_nbr(av[i]) == 0 || ft_check_ipt(av[i]) == 0
			|| ft_is_int(stack, av[i]) == 0)
			error(1, stack);
		i++;
	}
	i = -1;
	while (++i < stack->len_arg)
	{
		stack->a[i] = ft_atoi(av[j]);
		j++;
	}
	if (ft_double(stack, stack->len_a) == 0)
		error(1, stack);
	if (is_sorted(stack) == 1)
		error(2, stack);
}
