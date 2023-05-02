/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:39:11 by mortins-          #+#    #+#             */
/*   Updated: 2023/05/02 17:16:43 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rev_rotate(t_stack **stack)
{
	t_stack	*rotate;
	int		tmp;

	rotate = stk_last(*stack);
	tmp = stk_last(rotate)->data;
	while (rotate->previous)
	{
		rotate = rotate->previous;
		rotate->next->data = rotate->data;
	}
	rotate->data = tmp;
}

void	rev_rotate_a(t_stack **stk_a)
{
	rev_rotate(stk_a);
	write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stack **stk_b)
{
	rev_rotate(stk_b);
	write(1, "rrb\n", 4);
}

void	rev_rotate_r(t_stack **stk_a, t_stack **stk_b)
{
	rev_rotate(stk_a);
	rev_rotate(stk_b);
	write(1, "rrr\n", 4);
}