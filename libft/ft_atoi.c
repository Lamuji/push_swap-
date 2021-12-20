/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:43:06 by rfkaier           #+#    #+#             */
/*   Updated: 2021/12/20 20:52:37 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char str)
{
	if (str == '\t' || str == '\n' || str == '\r'
		|| str == '\v' || str == '\f' || str == ' ')
		return (1);
	return (0);
}

long long	ft_atoi(const char *str)
{
	int			i;
	long long	nbr;
	long long	n;

	n = 0;
	i = 0;
	nbr = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		else if (str[i] == '-')
			n++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	if (n % 2 == 0)
		return (nbr * 1);
	return (nbr * -1);
}
