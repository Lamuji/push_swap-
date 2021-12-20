/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:20:04 by ramzi             #+#    #+#             */
/*   Updated: 2021/12/20 20:46:48 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "libft/libft.h"

# define MIN -2147483648
# define MAX 2147483647

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	len_arg;
	int	len_a;
	int	len_b;
	int	index;
	int	max;
}				t_stack;

void	error(int x, t_stack *stack);
void	ft_free(t_stack *stack);
void	ft_init_struct(t_stack *stack, char **av);
int		is_sorted(t_stack *stack);
void	parse_arg(int ac, char **av, t_stack *stack, int i);
void	parse_char(t_stack *stack, char **av, int i);
int		ft_len_arg(char *str);
int		ft_str_is_nbr(char *str);
int		ft_check_ipt(char *str);
int		ft_is_int(t_stack *stack, char *str);
int		ft_count_nbr(char *c);
int		ft_double(t_stack *stack, int cmp);
void	ft_free_str(t_stack *stack, char **str);

int		ft_algo(t_stack *stack);
void	continue_algo(t_stack *stack, int nbr, int supp);
void	push_all_in_b(t_stack *stack);
int		best_option(t_stack *stack);
int		search_sup(t_stack *stack, int nbr);
int		max_a(t_stack *stack);
int		max_b(t_stack *stack);
int		min_a(t_stack *stack);
void	three_val(t_stack *stack);
int		index_b(t_stack *stack, int nbr);
int		index_a(t_stack *stack, int nbr);

int		cost_mov_a(t_stack *stack, int nbr);
int		cost_mov_b(t_stack *stack, int nbr);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	pb(t_stack *stack);
void	pa(t_stack *stack);
void	rrb(t_stack *stack);
void	rra(t_stack *stack);

#endif
