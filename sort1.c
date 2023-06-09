/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:38:54 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/09 22:39:02 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_savage *s)
{
	if (s->stack_a[0] == 2 && s->stack_a[1] == 0 && s->stack_a[2] == 1)
		sa(s);
	else if (s->stack_a[0] == 0 && s->stack_a[1] == 1 && s->stack_a[2] == 2)
	{
		sa(s);
		rra(s);
	}
	else if (s->stack_a[0] == 1 && s->stack_a[1] == 0 && s->stack_a[2] == 2)
		ra(s);
	else if (s->stack_a[0] == 1 && s->stack_a[1] == 2 && s->stack_a[2] == 0)
	{
		sa(s);
		ra(s);
	}
	else if (s->stack_a[0] == 0 && s->stack_a[1] == 2 && s->stack_a[2] == 1)
		rra(s);
}

void	sort_four(t_savage *s)
{
	while (s->stack_a[s->top_a] <= 2)
		ra(s);
	pb(s);
	sort_three(s);
	while(s->stack_b[s->top_b])
	{
		pa(s);
		ra(s);
	}
}

void	sort_five(t_savage *s)
{
	while (s->stack_a[s->top_a] <= 2)
		ra(s);
	pb(s);
	while (s->stack_a[s->top_a] <= 2)
		ra(s);
	pb(s);
	sort_three(s);
	if (s->stack_b[1] >  s->stack_b[0])
		sb(s);
	while(s->stack_b[s->top_b])
	{
		pa(s);
		ra(s);
	}
}
