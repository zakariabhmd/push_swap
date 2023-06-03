/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:20:29 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/03 18:29:58 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_savage *s)
{
	int	i;

	i = s->stack_a[s->top_a];
	s->stack_a[s->top_a] = s->stack_a[s->top_a - 1];
	s->stack_a[s->top_a - 1] = i;
}

void	sb(t_savage *s)
{
	int	i;

	i = s->stack_b[s->top_b];
	s->stack_b[s->top_b] = s->stack_b[s->top_b - 1];
	s->stack_b[s->top_b - 1] = i;
}

void	ra(t_savage *s)
{
	int	i;
	int	prime;

	i = s->top_a;
	prime = s->stack_a[s->top_a];
	while (i > 0)
	{
		s->stack_a[i] = s->stack_a[i - 1];
		i--;
	}
	s->stack_a[0] = prime;
}