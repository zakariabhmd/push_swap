/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:36:08 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/11 18:02:37 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_savage *s)
{
	int	i;

	i = 0;
	while (s->top_b +1)
	{
		if (s->stack_b[i] != s->top_b)
			i++;
		else if(i < s->top_b)
		{
			if (s->stack_b[s->top_b] != s->top_b)
			rrb(s);
		}
		else if(i >= s->top_b)
		{
			if (s->stack_b[s->top_b] != s->top_b)
			rb(s);
		}
		pa(s);
	}
}
void	sort100(t_savage *s)
{
	int r;
	int range;

	r = 0;
	range = 15;

	while(s->top_a + 1)
	{
		if (s->stack_a[s->top_a] > range)
			ra(s);
		else if (s->stack_a[s->top_a] < r)
		{
			pb(s);
			rb(s);
			r += 1;
			range += 1;
		}
		else if (s->stack_a[s->top_a] >= r && s->stack_a[s->top_a] <= range)
		{
			pb(s);
			r += 1;
			range += 1;
		}
	}
	push_back(s);
}