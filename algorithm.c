/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:51:18 by luestira          #+#    #+#             */
/*   Updated: 2026/01/22 20:55:44 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	stack_sorted(t_stack_node *stack)
{
	if (stack == NULL)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

static t_stack_node	*find_highest(t_stack_node *stack)
{
	int				highest;
	t_stack_node	*highest_value;

	highest = INT_MIN;
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->value > highest)
		{
			highest = stack->value;
			highest_value = stack;
		}
		stack = stack->next;
	}
	return (highest_value);
}

void	sort(t_stack_node **a)
{
	t_stack_node	*highest_value;

	highest_value = find_highest(*a);
	if (highest_value == *a)
		ra(a, false);
	else if ((*a)->next == highest_value)
		rra(a, false);
	if ((*a)->value > (*a)->next->value)
		sa(a, false);
}

void	handle_five_nums(t_stack_node **a, t_stack_node **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_rotation(a, find_smallest(*a), 'a');
		pb(b, a, false);
	}
}
