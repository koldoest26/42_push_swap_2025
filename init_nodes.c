/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:52:54 by luestira          #+#    #+#             */
/*   Updated: 2026/01/22 20:55:50 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_current_positions(t_stack_node *stack)
{
	int	i;
	int	centerline;

	i = 0;
	if (stack == NULL)
		return ;
	centerline = stack_len(stack) / 2;
	while (stack)
	{
		stack->current_position = i;
		if (centerline >= i)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		++i;
	}
}

static void	set_target_node(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*current_a;
	t_stack_node	*target_node;
	long			best_index;

	while (b)
	{
		best_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->value > b->value && current_a->value < best_index)
			{
				best_index = current_a->value;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_index == LONG_MAX)
			b->target_node = find_smallest(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	set_price(t_stack_node *a, t_stack_node *b)
{
	int	lenght_a;
	int	lenght_b;

	lenght_a = stack_len(a);
	lenght_b = stack_len(b);
	while (b)
	{
		b->push_price = b->current_position;
		if (!(b->above_median))
			b->push_price = lenght_b - (b->current_position);
		if (b->target_node->above_median)
			b->push_price += b->target_node->current_position;
		else
			b->push_price += lenght_a - (b->target_node->current_position);
		b = b->next;
	}
}

void	set_cheapest(t_stack_node *b)
{
	long			best_value;
	t_stack_node	*best_node;

	if (b == NULL)
		return ;
	best_value = LONG_MAX;
	while (b)
	{
		if (b->push_price < best_value)
		{
			best_value = b->push_price;
			best_node = b;
		}
		b = b->next;
	}
	best_node->cheapest = true;
}

void	init_nodes(t_stack_node *a, t_stack_node *b)
{
	set_current_positions(a);
	set_current_positions(b);
	set_target_node(a, b);
	set_price(a, b);
	set_cheapest(b);
}
