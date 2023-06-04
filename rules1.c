/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:07:14 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/03 20:17:46 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_savage *s)
{
	int	i;
	int	last;

	i = 0;
	last = s->stack_a[0];
	while (i <= s->top_a)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i++;
	}
	s->stack_a[s->top_a] = last;
	write (1, "rra\n", 4);
}

void	rrb(t_savage *s)
{
	int	i;
	int	last;

	i = 0;
	last = s->stack_b[0];
	while (i <= s->top_b)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[s->top_b] = last;
	write (1, "rrb\n", 4);
}

void	pa(t_savage *s)
{
	s->top_a++;
	s->stack_a[s->top_a] = s->stack_b[s->top_b];
	s->top_b--;
	write (1, "pa\n", 3);
}

void	pb(t_savage *s)
{
	s->top_b++;
	s->stack_b[s->top_b] = s->stack_a[s->top_a];
	s->top_a--;
	write (1, "pb\n", 3);
}
