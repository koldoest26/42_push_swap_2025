/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:52:46 by luestira          #+#    #+#             */
/*   Updated: 2026/01/22 20:55:59 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	int					final_index;
	int					push_price;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}	t_stack_node;

t_stack_node	*find_last_node(t_stack_node *head);
t_stack_node	*return_cheapest(t_stack_node *stack);
t_stack_node	*find_smallest(t_stack_node *stack);
void			pa(t_stack_node **a, t_stack_node **b, bool checker);
void			pb(t_stack_node **b, t_stack_node **a, bool checker);
void			ra(t_stack_node **a, bool checker);
void			rb(t_stack_node **b, bool checker);
void			rr(t_stack_node **a, t_stack_node **b, bool checker);
void			rra(t_stack_node **a, bool checker);
void			rrb(t_stack_node **b, bool checker);
void			rrr(t_stack_node **a, t_stack_node **b, bool checker);
void			sa(t_stack_node **a, bool checker);
void			sb(t_stack_node **b, bool checker);
void			ss(t_stack_node **a, t_stack_node **b, bool checker);
void			free_array(char **argv);
void			free_stack(t_stack_node **stack);
void			error_free(t_stack_node **a, char **argv, bool flag_argc_2);
int				syntax_error(char *str_nbr);
int				repetition_error(t_stack_node *a, int nbr);
void			set_current_positions(t_stack_node *stack);
void			set_price(t_stack_node *a, t_stack_node *b);
void			set_cheapest(t_stack_node *b);
void			init_nodes(t_stack_node *a, t_stack_node *b);
bool			stack_sorted(t_stack_node *stack);
void			sort(t_stack_node **a);
void			handle_five_nums(t_stack_node **a, t_stack_node **b);
void			stack_init(t_stack_node **a, char **argv, bool flag_argc_2);
int				stack_len(t_stack_node *stack);
void			append_node(t_stack_node **stack, int nbr);
void			push_swap(t_stack_node **a, t_stack_node **b);
void			finish_rotation(t_stack_node **stack, t_stack_node *top_node,
					char stack_names);

#endif
