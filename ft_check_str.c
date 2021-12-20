/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:17:56 by ramzi             #+#    #+#             */
/*   Updated: 2021/12/20 20:47:56 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_str_is_nbr(char *str)
{
	if ((*str == '+' || *str == '-' || *str == ' ') && *(str + 1))
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_check_ipt(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str) && !((*str == '+' || *str == '-')
				&& ft_isdigit(*(str + 1))))
			return (0);
		str++;
	}
	return (1);
}

int	ft_is_int(t_stack *stack, char *str)
{
	int	i;

	i = 0;
	while (i < stack->len_a)
	{
		if (ft_atoi(str) > MAX || ft_atoi(str) < MIN)
			return (0);
		i++;
	}
	return (1);
}

int	ft_double(t_stack *stack, int cmp)
{
	int	i;
	int	j;

	i = 0;
	while (i < cmp)
	{
		j = i + 1;
		while (j < cmp)
		{
			if (stack->a[i] == stack->a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_count_nbr(char *c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (c[i])
	{
		if (c[i] != ' ' && (c[i + 1] == ' ' || c[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}
